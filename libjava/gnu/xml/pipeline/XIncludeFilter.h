
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_pipeline_XIncludeFilter__
#define __gnu_xml_pipeline_XIncludeFilter__

#pragma interface

#include <gnu/xml/pipeline/EventFilter.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace pipeline
      {
          class EventConsumer;
          class XIncludeFilter;
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class URL;
    }
  }
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class Attributes;
          class Locator;
          class SAXParseException;
      }
    }
  }
}

class gnu::xml::pipeline::XIncludeFilter : public ::gnu::xml::pipeline::EventFilter
{

public:
  XIncludeFilter(::gnu::xml::pipeline::EventConsumer *);
private:
  void fatal(::org::xml::sax::SAXParseException *);
public:
  virtual void setDocumentLocator(::org::xml::sax::Locator *);
  virtual ::java::lang::String * getSystemId();
  virtual ::java::lang::String * getPublicId();
  virtual jint getLineNumber();
  virtual jint getColumnNumber();
  virtual void setSavingPrefixes(jboolean);
  virtual jboolean isSavingPrefixes();
private:
  ::java::lang::String * addMarker(::java::lang::String *);
  void pop(::java::lang::String *);
public:
  virtual void startDocument();
  virtual void endDocument();
  virtual void externalEntityDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void startEntity(::java::lang::String *);
  virtual void endEntity(::java::lang::String *);
  virtual void startElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::org::xml::sax::Attributes *);
  virtual void endElement(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void characters(JArray< jchar > *, jint, jint);
  virtual void processingInstruction(::java::lang::String *, ::java::lang::String *);
  virtual void ignorableWhitespace(JArray< jchar > *, jint, jint);
  virtual void comment(JArray< jchar > *, jint, jint);
  virtual void startCDATA();
  virtual void endCDATA();
  virtual void startPrefixMapping(::java::lang::String *, ::java::lang::String *);
  virtual void endPrefixMapping(::java::lang::String *);
  virtual void skippedEntity(::java::lang::String *);
public: // actually package-private
  virtual void setLocator(::org::xml::sax::Locator *);
  virtual ::org::xml::sax::Locator * getLocator();
private:
  ::org::xml::sax::SAXParseException * xinclude(::java::net::URL *, ::java::lang::String *);
  ::org::xml::sax::SAXParseException * readText(::java::net::URL *, ::java::lang::String *, ::java::lang::String *);
public: // actually package-private
  static void access$0(::gnu::xml::pipeline::XIncludeFilter *, ::org::xml::sax::SAXParseException *);
private:
  ::java::util::Hashtable * __attribute__((aligned(__alignof__( ::gnu::xml::pipeline::EventFilter)))) extEntities;
  jint ignoreCount;
  ::java::util::Stack * uris;
  ::org::xml::sax::Locator * locator;
  ::java::util::Vector * inclusions;
  jboolean savingPrefixes;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_pipeline_XIncludeFilter__
