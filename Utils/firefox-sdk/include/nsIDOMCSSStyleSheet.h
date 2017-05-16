/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\nsIDOMCSSStyleSheet.idl
 */

#ifndef __gen_nsIDOMCSSStyleSheet_h__
#define __gen_nsIDOMCSSStyleSheet_h__


#ifndef __gen_nsIDOMStyleSheet_h__
#include "nsIDOMStyleSheet.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMCSSStyleSheet */
#define NS_IDOMCSSSTYLESHEET_IID_STR "a6cf90c2-15b3-11d2-932e-00805f8add32"

#define NS_IDOMCSSSTYLESHEET_IID \
  {0xa6cf90c2, 0x15b3, 0x11d2, \
    { 0x93, 0x2e, 0x00, 0x80, 0x5f, 0x8a, 0xdd, 0x32 }}

class NS_NO_VTABLE nsIDOMCSSStyleSheet : public nsIDOMStyleSheet {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCSSSTYLESHEET_IID)

  /* readonly attribute nsIDOMCSSRule ownerRule; */
  NS_IMETHOD GetOwnerRule(nsIDOMCSSRule * *aOwnerRule) = 0;

  /* readonly attribute nsIDOMCSSRuleList cssRules; */
  NS_IMETHOD GetCssRules(nsIDOMCSSRuleList * *aCssRules) = 0;

  /* unsigned long insertRule (in DOMString rule, in unsigned long index) raises (DOMException); */
  NS_IMETHOD InsertRule(const nsAString & rule, uint32_t index, uint32_t *_retval) = 0;

  /* void deleteRule (in unsigned long index) raises (DOMException); */
  NS_IMETHOD DeleteRule(uint32_t index) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMCSSStyleSheet, NS_IDOMCSSSTYLESHEET_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCSSSTYLESHEET \
  NS_IMETHOD GetOwnerRule(nsIDOMCSSRule * *aOwnerRule) override; \
  NS_IMETHOD GetCssRules(nsIDOMCSSRuleList * *aCssRules) override; \
  NS_IMETHOD InsertRule(const nsAString & rule, uint32_t index, uint32_t *_retval) override; \
  NS_IMETHOD DeleteRule(uint32_t index) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMCSSSTYLESHEET \
  NS_METHOD GetOwnerRule(nsIDOMCSSRule * *aOwnerRule); \
  NS_METHOD GetCssRules(nsIDOMCSSRuleList * *aCssRules); \
  NS_METHOD InsertRule(const nsAString & rule, uint32_t index, uint32_t *_retval); \
  NS_METHOD DeleteRule(uint32_t index); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCSSSTYLESHEET(_to) \
  NS_IMETHOD GetOwnerRule(nsIDOMCSSRule * *aOwnerRule) override { return _to GetOwnerRule(aOwnerRule); } \
  NS_IMETHOD GetCssRules(nsIDOMCSSRuleList * *aCssRules) override { return _to GetCssRules(aCssRules); } \
  NS_IMETHOD InsertRule(const nsAString & rule, uint32_t index, uint32_t *_retval) override { return _to InsertRule(rule, index, _retval); } \
  NS_IMETHOD DeleteRule(uint32_t index) override { return _to DeleteRule(index); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCSSSTYLESHEET(_to) \
  NS_IMETHOD GetOwnerRule(nsIDOMCSSRule * *aOwnerRule) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwnerRule(aOwnerRule); } \
  NS_IMETHOD GetCssRules(nsIDOMCSSRuleList * *aCssRules) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCssRules(aCssRules); } \
  NS_IMETHOD InsertRule(const nsAString & rule, uint32_t index, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertRule(rule, index, _retval); } \
  NS_IMETHOD DeleteRule(uint32_t index) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteRule(index); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMCSSStyleSheet : public nsIDOMCSSStyleSheet
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCSSSTYLESHEET

  nsDOMCSSStyleSheet();

private:
  ~nsDOMCSSStyleSheet();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMCSSStyleSheet, nsIDOMCSSStyleSheet)

nsDOMCSSStyleSheet::nsDOMCSSStyleSheet()
{
  /* member initializers and constructor code */
}

nsDOMCSSStyleSheet::~nsDOMCSSStyleSheet()
{
  /* destructor code */
}

/* readonly attribute nsIDOMCSSRule ownerRule; */
NS_IMETHODIMP nsDOMCSSStyleSheet::GetOwnerRule(nsIDOMCSSRule * *aOwnerRule)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMCSSRuleList cssRules; */
NS_IMETHODIMP nsDOMCSSStyleSheet::GetCssRules(nsIDOMCSSRuleList * *aCssRules)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long insertRule (in DOMString rule, in unsigned long index) raises (DOMException); */
NS_IMETHODIMP nsDOMCSSStyleSheet::InsertRule(const nsAString & rule, uint32_t index, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteRule (in unsigned long index) raises (DOMException); */
NS_IMETHODIMP nsDOMCSSStyleSheet::DeleteRule(uint32_t index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMCSSStyleSheet_h__ */
