
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_INV_POLICY__
#define __org_omg_CORBA_INV_POLICY__

#pragma interface

#include <org/omg/CORBA/SystemException.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class CompletionStatus;
          class INV_POLICY;
      }
    }
  }
}

class org::omg::CORBA::INV_POLICY : public ::org::omg::CORBA::SystemException
{

public:
  INV_POLICY(::java::lang::String *);
  INV_POLICY();
  INV_POLICY(jint, ::org::omg::CORBA::CompletionStatus *);
  INV_POLICY(::java::lang::String *, jint, ::org::omg::CORBA::CompletionStatus *);
private:
  static const jlong serialVersionUID = -7823113107689030975LL;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_INV_POLICY__
