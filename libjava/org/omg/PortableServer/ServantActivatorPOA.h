
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableServer_ServantActivatorPOA__
#define __org_omg_PortableServer_ServantActivatorPOA__

#pragma interface

#include <org/omg/PortableServer/Servant.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class ORB;
        namespace portable
        {
            class InputStream;
            class OutputStream;
            class ResponseHandler;
        }
      }
      namespace PortableServer
      {
          class POA;
          class Servant;
          class ServantActivator;
          class ServantActivatorPOA;
      }
    }
  }
}

class org::omg::PortableServer::ServantActivatorPOA : public ::org::omg::PortableServer::Servant
{

public:
  ServantActivatorPOA();
  virtual ::org::omg::CORBA::portable::OutputStream * _invoke(::java::lang::String *, ::org::omg::CORBA::portable::InputStream *, ::org::omg::CORBA::portable::ResponseHandler *);
  virtual JArray< ::java::lang::String * > * _all_interfaces(::org::omg::PortableServer::POA *, JArray< jbyte > *);
  virtual ::org::omg::PortableServer::ServantActivator * _this();
  virtual ::org::omg::PortableServer::ServantActivator * _this(::org::omg::CORBA::ORB *);
  virtual void etherealize(JArray< jbyte > *, ::org::omg::PortableServer::POA *, ::org::omg::PortableServer::Servant *, jboolean, jboolean) = 0;
  virtual ::org::omg::PortableServer::Servant * incarnate(JArray< jbyte > *, ::org::omg::PortableServer::POA *) = 0;
public: // actually package-private
  ::org::omg::PortableServer::ServantActivatorPOA * __attribute__((aligned(__alignof__( ::org::omg::PortableServer::Servant)))) THIS;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableServer_ServantActivatorPOA__
