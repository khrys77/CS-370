/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Khrys' Pc
 *
 * Created on November 6, 2017, 4:28 PM
 */


#include <cstdlib>
#include <iostream>
#include "player.h"
#include <sql.h>
#include "mysql_connection.h"
#include "cppconn/driver.h"
#include "cppconn/exception.h"
#include "cppconn/statement.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

  player p1;
  p1.set_pscore(15);
    
  sql::Driver *driver;
  sql::Connection *con;
  sql::Statement *stmt;
        
  /* Create a connection */

  driver = sql::mysql::get_driver_instance();

  con = driver->connect("sql9.freemysqlhosting.net", "sql9203138", "6M5I7Xmant");
  if ( sql::Connection::isValid())
  {
       //con->setSchema("sql9203138");
  stmt = con->createStatement();
  stmt->execute("USE " sql9203138);//its not recognizing this command at all so im guessing it cant connect to te database
  stmt->execute("INSERT INTO timeline (Player score) VALUES (p1.get_pscore()"); 
  }
  
 
 


        

  
    
    delete stmt;
    delete con;
}

    

