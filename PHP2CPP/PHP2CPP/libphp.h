/***********************************************************
php2c++ Version 20010620
Copyright 2001, Forrest J. Cavalier III d-b-a Mib Software

License, documentation, and original and updated source code
are available from http://www.mibsoftware.com/

Outputs are not derived works of this software.
***********************************************************/
#ifndef _INC_libphp2c_h
#define _INC_libphp2c_h

#define function
#define var


class string {
public:
    string ();
    string (const string &b);
    ~string ();

    string (const char *x);

    string (int x);
/*    operator int ();  Causes problems with ambiguous overloading
                        2 overloads have similar conversions.  In php
			try to use intval()
                      */
    const string & operator+=(const char *x2);
    const string & operator+=(const string &s2);
    string & operator+ (const char *x2);
    string & operator+ (const string  &x2);
    operator const char *();
    friend string & operator+(const char *x2,const string  &); /* Needed for "test" + string */
    int operator!=(const char *);
    int operator==(const char *);
    int operator!=(const string  &); /* Not strictly needed, but efficient */
    int operator==(const string  &); /* Not strictly needed, but efficient */
    int operator!();

    const string & operator = ( const string & str ); /* Needed for implementation, not syntax checking
				       Otherwise default copy constructor is used
                                     */

};

class array;

class php_array {
    int m_;
public:
    string  &operator [](const char *);
    int operator=(php_array &);
    int operator!();

};

void showhtml(const char *);


long filesize(const char *);

#define substr php_substr


class mixed
{/* A type-morphing variable.  Don't use unless
     absolutely necessary, since it will disable
     C++ type checking.
  */
public:
  mixed();
  mixed(string,...);
  mixed &operator[](int);
  mixed &operator[](const char *);
  mixed &operator=(const char *);
  mixed &operator=(string);
  mixed &operator=(int);
  mixed &operator=(class mixed const &);
  int operator!();
};
typedef mixed object;
typedef mixed resource;


class array
{
int m_;
public:
    array(...);
    array &operator=(class array const &);
    mixed  &operator [](const char *);
    mixed  &operator [](int);
    int operator=(php_array &);
    int operator!();
};


array list(string &a);
array list(string &a, string &b);
array php_split(const char *,const char *);


array _s_GLOBALS;
void unset(mixed &);

class string_array
{ /* Array returning a string.  Better to use this than
     array 
   */
public:
  string &operator[](int);
  string &operator[](const char *);
  int operator!();
  operator array();
};


#define bool int
#define false 0
#define FALSE 0
#define true 1
#define TRUE 1
#define _APPEND_ (char *) 1

const char *php_substr(const char *,int,int cnt =-1);

#include "phpdef.h"

#endif
