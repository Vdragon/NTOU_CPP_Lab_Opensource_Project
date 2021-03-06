/*College.cpp
-----------------------------------
更新紀錄 | Changelog
  Changelog is now stored on GitHub
已知問題 | Known Issues
  Known issues is now stored on GitHub
待辦事項 | Todos
  Todo is now stored on GitHub
著作權宣告 | Copyright notice
  Copyright 2012 林博仁(Henry Lin, pika1021@gmail.com)
智慧財產授權條款：
  College.cpp is part of Lab 6-2
  This software is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This software is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this software.  If not, see <http://www.gnu.org/licenses/>.
*/

/*--------------程式碼開始(Code Started)--------------*/
/*--------------前期處理器指令(Preprocessor Directive)--------------*/
/*////////程式所include之函式庫的標頭檔(Included Library Headers)////////*/
/*標準C++函式庫*/
#include <string>
#include <iostream>
using namespace std;

/*Vdragon's Library Collection*/
#include "portableEOLalgorithm/portableEOLalgorithm.h"
#include "Messages_templates/zh_TW.h"

/*大學ADT*/
#include "College.h"

/*////////常數與巨集(Constants & Macros)////////*/

/*////////其他前期處理器指令(Other Preprocessor Directives////////*/

/*--------------全域宣告與定義(Global Declaration & Definition)--------------*/
/*////////Classes、資料結構(Data Structures)、type definitions跟enumerations////////*/

/*////////函式和函式雛型(Function & Function Prototypes)////////*/

/*////////全域變數(Global Variables)////////*/

/*--------------主要程式碼(Main Code)--------------*/
College::College(){

}

/* 自Resources/ntou1.txt格式的資料檔案獲取學院資料的constructer */
College::College(ifstream& universityData) {
  portableGetline(universityData, m_name);

  /* 建構底下的學系 */{
    unsigned numberOfDepartments;
    Department *allocator = NULL;

    universityData >> numberOfDepartments;
    skipEOLsequence(universityData);

    for(register unsigned i = 0; i < numberOfDepartments; ++i){
      allocator = new (nothrow) Department(universityData);

      if(allocator == NULL){
        cout << ERROR_TAG << ERROR_MEMORY_ALLOCATION_FAIL
             << ERROR_TAG << "建立Department物件失敗！" << endl;
      }
      m_departments.push_back(allocator);
    }
  }
}

College::~College() {
  for(vector<Department *>::iterator i = m_departments.begin();
      i < m_departments.end(); ++i){
    delete *i;
  }
}

void College::print(std::ostream &output){
  output << "　學院名稱：" << m_name << endl;

  /* 印出底下的系所資訊 */{
    for(vector<Department *>::iterator i = m_departments.begin();
        i < m_departments.end();
        ++i){
      (*i)->print(output);
    }
  }

  return;
}
