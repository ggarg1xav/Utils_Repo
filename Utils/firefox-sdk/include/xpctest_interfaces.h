/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\xpctest_interfaces.idl
 */

#ifndef __gen_xpctest_interfaces_h__
#define __gen_xpctest_interfaces_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIXPCTestInterfaceA */
#define NS_IXPCTESTINTERFACEA_IID_STR "3c8fd2f5-970c-42c6-b5dd-cda1c16dcfd8"

#define NS_IXPCTESTINTERFACEA_IID \
  {0x3c8fd2f5, 0x970c, 0x42c6, \
    { 0xb5, 0xdd, 0xcd, 0xa1, 0xc1, 0x6d, 0xcf, 0xd8 }}

class NS_NO_VTABLE nsIXPCTestInterfaceA : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCTESTINTERFACEA_IID)

  /* attribute string name; */
  NS_IMETHOD GetName(char * *aName) = 0;
  NS_IMETHOD SetName(const char * aName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCTestInterfaceA, NS_IXPCTESTINTERFACEA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCTESTINTERFACEA \
  NS_IMETHOD GetName(char * *aName) override; \
  NS_IMETHOD SetName(const char * aName) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXPCTESTINTERFACEA \
  NS_METHOD GetName(char * *aName); \
  NS_METHOD SetName(const char * aName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCTESTINTERFACEA(_to) \
  NS_IMETHOD GetName(char * *aName) override { return _to GetName(aName); } \
  NS_IMETHOD SetName(const char * aName) override { return _to SetName(aName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCTESTINTERFACEA(_to) \
  NS_IMETHOD GetName(char * *aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const char * aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCTestInterfaceA : public nsIXPCTestInterfaceA
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCTESTINTERFACEA

  nsXPCTestInterfaceA();

private:
  ~nsXPCTestInterfaceA();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXPCTestInterfaceA, nsIXPCTestInterfaceA)

nsXPCTestInterfaceA::nsXPCTestInterfaceA()
{
  /* member initializers and constructor code */
}

nsXPCTestInterfaceA::~nsXPCTestInterfaceA()
{
  /* destructor code */
}

/* attribute string name; */
NS_IMETHODIMP nsXPCTestInterfaceA::GetName(char * *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPCTestInterfaceA::SetName(const char * aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXPCTestInterfaceB */
#define NS_IXPCTESTINTERFACEB_IID_STR "ff528c3a-2410-46de-acaa-449aa6403a33"

#define NS_IXPCTESTINTERFACEB_IID \
  {0xff528c3a, 0x2410, 0x46de, \
    { 0xac, 0xaa, 0x44, 0x9a, 0xa6, 0x40, 0x3a, 0x33 }}

class NS_NO_VTABLE nsIXPCTestInterfaceB : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCTESTINTERFACEB_IID)

  /* attribute string name; */
  NS_IMETHOD GetName(char * *aName) = 0;
  NS_IMETHOD SetName(const char * aName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCTestInterfaceB, NS_IXPCTESTINTERFACEB_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCTESTINTERFACEB \
  NS_IMETHOD GetName(char * *aName) override; \
  NS_IMETHOD SetName(const char * aName) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXPCTESTINTERFACEB \
  NS_METHOD GetName(char * *aName); \
  NS_METHOD SetName(const char * aName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCTESTINTERFACEB(_to) \
  NS_IMETHOD GetName(char * *aName) override { return _to GetName(aName); } \
  NS_IMETHOD SetName(const char * aName) override { return _to SetName(aName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCTESTINTERFACEB(_to) \
  NS_IMETHOD GetName(char * *aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const char * aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCTestInterfaceB : public nsIXPCTestInterfaceB
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCTESTINTERFACEB

  nsXPCTestInterfaceB();

private:
  ~nsXPCTestInterfaceB();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXPCTestInterfaceB, nsIXPCTestInterfaceB)

nsXPCTestInterfaceB::nsXPCTestInterfaceB()
{
  /* member initializers and constructor code */
}

nsXPCTestInterfaceB::~nsXPCTestInterfaceB()
{
  /* destructor code */
}

/* attribute string name; */
NS_IMETHODIMP nsXPCTestInterfaceB::GetName(char * *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPCTestInterfaceB::SetName(const char * aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXPCTestInterfaceC */
#define NS_IXPCTESTINTERFACEC_IID_STR "401cf1b4-355b-4cee-b7b3-c7973aee49bd"

#define NS_IXPCTESTINTERFACEC_IID \
  {0x401cf1b4, 0x355b, 0x4cee, \
    { 0xb7, 0xb3, 0xc7, 0x97, 0x3a, 0xee, 0x49, 0xbd }}

class NS_NO_VTABLE nsIXPCTestInterfaceC : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCTESTINTERFACEC_IID)

  /* attribute long someInteger; */
  NS_IMETHOD GetSomeInteger(int32_t *aSomeInteger) = 0;
  NS_IMETHOD SetSomeInteger(int32_t aSomeInteger) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCTestInterfaceC, NS_IXPCTESTINTERFACEC_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCTESTINTERFACEC \
  NS_IMETHOD GetSomeInteger(int32_t *aSomeInteger) override; \
  NS_IMETHOD SetSomeInteger(int32_t aSomeInteger) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXPCTESTINTERFACEC \
  NS_METHOD GetSomeInteger(int32_t *aSomeInteger); \
  NS_METHOD SetSomeInteger(int32_t aSomeInteger); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCTESTINTERFACEC(_to) \
  NS_IMETHOD GetSomeInteger(int32_t *aSomeInteger) override { return _to GetSomeInteger(aSomeInteger); } \
  NS_IMETHOD SetSomeInteger(int32_t aSomeInteger) override { return _to SetSomeInteger(aSomeInteger); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCTESTINTERFACEC(_to) \
  NS_IMETHOD GetSomeInteger(int32_t *aSomeInteger) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSomeInteger(aSomeInteger); } \
  NS_IMETHOD SetSomeInteger(int32_t aSomeInteger) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSomeInteger(aSomeInteger); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCTestInterfaceC : public nsIXPCTestInterfaceC
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCTESTINTERFACEC

  nsXPCTestInterfaceC();

private:
  ~nsXPCTestInterfaceC();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXPCTestInterfaceC, nsIXPCTestInterfaceC)

nsXPCTestInterfaceC::nsXPCTestInterfaceC()
{
  /* member initializers and constructor code */
}

nsXPCTestInterfaceC::~nsXPCTestInterfaceC()
{
  /* destructor code */
}

/* attribute long someInteger; */
NS_IMETHODIMP nsXPCTestInterfaceC::GetSomeInteger(int32_t *aSomeInteger)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPCTestInterfaceC::SetSomeInteger(int32_t aSomeInteger)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_xpctest_interfaces_h__ */
