/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl\nsIChannel.idl
 */

#ifndef __gen_nsIChannel_h__
#define __gen_nsIChannel_h__


#ifndef __gen_nsIRequest_h__
#include "nsIRequest.h"
#endif

#ifndef __gen_nsILoadInfo_h__
#include "nsILoadInfo.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIInterfaceRequestor; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIStreamListener; /* forward declaration */

#include "nsCOMPtr.h"

/* starting interface:    nsIChannel */
#define NS_ICHANNEL_IID_STR "2c389865-23db-4aa7-9fe5-60cc7b00697e"

#define NS_ICHANNEL_IID \
  {0x2c389865, 0x23db, 0x4aa7, \
    { 0x9f, 0xe5, 0x60, 0xcc, 0x7b, 0x00, 0x69, 0x7e }}

class nsIChannel : public nsIRequest {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICHANNEL_IID)

  /* attribute nsIURI originalURI; */
  NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) = 0;
  NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI) = 0;

  /* readonly attribute nsIURI URI; */
  NS_IMETHOD GetURI(nsIURI * *aURI) = 0;

  /* attribute nsISupports owner; */
  NS_IMETHOD GetOwner(nsISupports * *aOwner) = 0;
  NS_IMETHOD SetOwner(nsISupports *aOwner) = 0;

  /* attribute nsIInterfaceRequestor notificationCallbacks; */
  NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) = 0;
  NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) = 0;

  /* readonly attribute nsISupports securityInfo; */
  NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) = 0;

  /* attribute ACString contentType; */
  NS_IMETHOD GetContentType(nsACString & aContentType) = 0;
  NS_IMETHOD SetContentType(const nsACString & aContentType) = 0;

  /* attribute ACString contentCharset; */
  NS_IMETHOD GetContentCharset(nsACString & aContentCharset) = 0;
  NS_IMETHOD SetContentCharset(const nsACString & aContentCharset) = 0;

  /* attribute int64_t contentLength; */
  NS_IMETHOD GetContentLength(int64_t *aContentLength) = 0;
  NS_IMETHOD SetContentLength(int64_t aContentLength) = 0;

  /* nsIInputStream open (); */
  NS_IMETHOD Open(nsIInputStream * *_retval) = 0;

  /* nsIInputStream open2 (); */
  NS_IMETHOD Open2(nsIInputStream * *_retval) = 0;

  /* void asyncOpen (in nsIStreamListener aListener, in nsISupports aContext); */
  NS_IMETHOD AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext) = 0;

  /* void asyncOpen2 (in nsIStreamListener aListener); */
  NS_IMETHOD AsyncOpen2(nsIStreamListener *aListener) = 0;

  enum {
    LOAD_DOCUMENT_URI = 65536U,
    LOAD_RETARGETED_DOCUMENT_URI = 131072U,
    LOAD_REPLACE = 262144U,
    LOAD_INITIAL_DOCUMENT_URI = 524288U,
    LOAD_TARGETED = 1048576U,
    LOAD_CALL_CONTENT_SNIFFERS = 2097152U,
    LOAD_CLASSIFY_URI = 4194304U,
    LOAD_MEDIA_SNIFFER_OVERRIDES_CONTENT_TYPE = 8388608U,
    LOAD_EXPLICIT_CREDENTIALS = 16777216U,
    LOAD_BYPASS_SERVICE_WORKER = 33554432U
  };

  /* attribute unsigned long contentDisposition; */
  NS_IMETHOD GetContentDisposition(uint32_t *aContentDisposition) = 0;
  NS_IMETHOD SetContentDisposition(uint32_t aContentDisposition) = 0;

  enum {
    DISPOSITION_INLINE = 0U,
    DISPOSITION_ATTACHMENT = 1U
  };

  /* attribute AString contentDispositionFilename; */
  NS_IMETHOD GetContentDispositionFilename(nsAString & aContentDispositionFilename) = 0;
  NS_IMETHOD SetContentDispositionFilename(const nsAString & aContentDispositionFilename) = 0;

  /* readonly attribute ACString contentDispositionHeader; */
  NS_IMETHOD GetContentDispositionHeader(nsACString & aContentDispositionHeader) = 0;

  /* attribute nsILoadInfo loadInfo; */
  NS_IMETHOD GetLoadInfo(nsILoadInfo * *aLoadInfo) = 0;
  NS_IMETHOD SetLoadInfo(nsILoadInfo *aLoadInfo) = 0;

   inline already_AddRefed<nsILoadInfo> GetLoadInfo()
  {
    nsCOMPtr<nsILoadInfo> result;
    mozilla::DebugOnly<nsresult> rv = GetLoadInfo(getter_AddRefs(result));
    MOZ_ASSERT(NS_SUCCEEDED(rv) || !result);
    return result.forget();
  }
};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIChannel, NS_ICHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICHANNEL \
  NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) override; \
  NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI) override; \
  NS_IMETHOD GetURI(nsIURI * *aURI) override; \
  NS_IMETHOD GetOwner(nsISupports * *aOwner) override; \
  NS_IMETHOD SetOwner(nsISupports *aOwner) override; \
  NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) override; \
  NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) override; \
  NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) override; \
  NS_IMETHOD GetContentType(nsACString & aContentType) override; \
  NS_IMETHOD SetContentType(const nsACString & aContentType) override; \
  NS_IMETHOD GetContentCharset(nsACString & aContentCharset) override; \
  NS_IMETHOD SetContentCharset(const nsACString & aContentCharset) override; \
  NS_IMETHOD GetContentLength(int64_t *aContentLength) override; \
  NS_IMETHOD SetContentLength(int64_t aContentLength) override; \
  NS_IMETHOD Open(nsIInputStream * *_retval) override; \
  NS_IMETHOD Open2(nsIInputStream * *_retval) override; \
  NS_IMETHOD AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext) override; \
  NS_IMETHOD AsyncOpen2(nsIStreamListener *aListener) override; \
  NS_IMETHOD GetContentDisposition(uint32_t *aContentDisposition) override; \
  NS_IMETHOD SetContentDisposition(uint32_t aContentDisposition) override; \
  NS_IMETHOD GetContentDispositionFilename(nsAString & aContentDispositionFilename) override; \
  NS_IMETHOD SetContentDispositionFilename(const nsAString & aContentDispositionFilename) override; \
  NS_IMETHOD GetContentDispositionHeader(nsACString & aContentDispositionHeader) override; \
  NS_IMETHOD GetLoadInfo(nsILoadInfo * *aLoadInfo) override; \
  NS_IMETHOD SetLoadInfo(nsILoadInfo *aLoadInfo) override; \

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICHANNEL \
  NS_METHOD GetOriginalURI(nsIURI * *aOriginalURI); \
  NS_METHOD SetOriginalURI(nsIURI *aOriginalURI); \
  NS_METHOD GetURI(nsIURI * *aURI); \
  NS_METHOD GetOwner(nsISupports * *aOwner); \
  NS_METHOD SetOwner(nsISupports *aOwner); \
  NS_METHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks); \
  NS_METHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks); \
  NS_METHOD GetSecurityInfo(nsISupports * *aSecurityInfo); \
  NS_METHOD GetContentType(nsACString & aContentType); \
  NS_METHOD SetContentType(const nsACString & aContentType); \
  NS_METHOD GetContentCharset(nsACString & aContentCharset); \
  NS_METHOD SetContentCharset(const nsACString & aContentCharset); \
  NS_METHOD GetContentLength(int64_t *aContentLength); \
  NS_METHOD SetContentLength(int64_t aContentLength); \
  NS_METHOD Open(nsIInputStream * *_retval); \
  NS_METHOD Open2(nsIInputStream * *_retval); \
  NS_METHOD AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext); \
  NS_METHOD AsyncOpen2(nsIStreamListener *aListener); \
  NS_METHOD GetContentDisposition(uint32_t *aContentDisposition); \
  NS_METHOD SetContentDisposition(uint32_t aContentDisposition); \
  NS_METHOD GetContentDispositionFilename(nsAString & aContentDispositionFilename); \
  NS_METHOD SetContentDispositionFilename(const nsAString & aContentDispositionFilename); \
  NS_METHOD GetContentDispositionHeader(nsACString & aContentDispositionHeader); \
  NS_METHOD GetLoadInfo(nsILoadInfo * *aLoadInfo); \
  NS_METHOD SetLoadInfo(nsILoadInfo *aLoadInfo); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICHANNEL(_to) \
  NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) override { return _to GetOriginalURI(aOriginalURI); } \
  NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI) override { return _to SetOriginalURI(aOriginalURI); } \
  NS_IMETHOD GetURI(nsIURI * *aURI) override { return _to GetURI(aURI); } \
  NS_IMETHOD GetOwner(nsISupports * *aOwner) override { return _to GetOwner(aOwner); } \
  NS_IMETHOD SetOwner(nsISupports *aOwner) override { return _to SetOwner(aOwner); } \
  NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) override { return _to GetNotificationCallbacks(aNotificationCallbacks); } \
  NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) override { return _to SetNotificationCallbacks(aNotificationCallbacks); } \
  NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) override { return _to GetSecurityInfo(aSecurityInfo); } \
  NS_IMETHOD GetContentType(nsACString & aContentType) override { return _to GetContentType(aContentType); } \
  NS_IMETHOD SetContentType(const nsACString & aContentType) override { return _to SetContentType(aContentType); } \
  NS_IMETHOD GetContentCharset(nsACString & aContentCharset) override { return _to GetContentCharset(aContentCharset); } \
  NS_IMETHOD SetContentCharset(const nsACString & aContentCharset) override { return _to SetContentCharset(aContentCharset); } \
  NS_IMETHOD GetContentLength(int64_t *aContentLength) override { return _to GetContentLength(aContentLength); } \
  NS_IMETHOD SetContentLength(int64_t aContentLength) override { return _to SetContentLength(aContentLength); } \
  NS_IMETHOD Open(nsIInputStream * *_retval) override { return _to Open(_retval); } \
  NS_IMETHOD Open2(nsIInputStream * *_retval) override { return _to Open2(_retval); } \
  NS_IMETHOD AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext) override { return _to AsyncOpen(aListener, aContext); } \
  NS_IMETHOD AsyncOpen2(nsIStreamListener *aListener) override { return _to AsyncOpen2(aListener); } \
  NS_IMETHOD GetContentDisposition(uint32_t *aContentDisposition) override { return _to GetContentDisposition(aContentDisposition); } \
  NS_IMETHOD SetContentDisposition(uint32_t aContentDisposition) override { return _to SetContentDisposition(aContentDisposition); } \
  NS_IMETHOD GetContentDispositionFilename(nsAString & aContentDispositionFilename) override { return _to GetContentDispositionFilename(aContentDispositionFilename); } \
  NS_IMETHOD SetContentDispositionFilename(const nsAString & aContentDispositionFilename) override { return _to SetContentDispositionFilename(aContentDispositionFilename); } \
  NS_IMETHOD GetContentDispositionHeader(nsACString & aContentDispositionHeader) override { return _to GetContentDispositionHeader(aContentDispositionHeader); } \
  NS_IMETHOD GetLoadInfo(nsILoadInfo * *aLoadInfo) override { return _to GetLoadInfo(aLoadInfo); } \
  NS_IMETHOD SetLoadInfo(nsILoadInfo *aLoadInfo) override { return _to SetLoadInfo(aLoadInfo); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICHANNEL(_to) \
  NS_IMETHOD GetOriginalURI(nsIURI * *aOriginalURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginalURI(aOriginalURI); } \
  NS_IMETHOD SetOriginalURI(nsIURI *aOriginalURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOriginalURI(aOriginalURI); } \
  NS_IMETHOD GetURI(nsIURI * *aURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURI(aURI); } \
  NS_IMETHOD GetOwner(nsISupports * *aOwner) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwner(aOwner); } \
  NS_IMETHOD SetOwner(nsISupports *aOwner) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOwner(aOwner); } \
  NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNotificationCallbacks(aNotificationCallbacks); } \
  NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNotificationCallbacks(aNotificationCallbacks); } \
  NS_IMETHOD GetSecurityInfo(nsISupports * *aSecurityInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecurityInfo(aSecurityInfo); } \
  NS_IMETHOD GetContentType(nsACString & aContentType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentType(aContentType); } \
  NS_IMETHOD SetContentType(const nsACString & aContentType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentType(aContentType); } \
  NS_IMETHOD GetContentCharset(nsACString & aContentCharset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentCharset(aContentCharset); } \
  NS_IMETHOD SetContentCharset(const nsACString & aContentCharset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentCharset(aContentCharset); } \
  NS_IMETHOD GetContentLength(int64_t *aContentLength) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentLength(aContentLength); } \
  NS_IMETHOD SetContentLength(int64_t aContentLength) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentLength(aContentLength); } \
  NS_IMETHOD Open(nsIInputStream * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Open(_retval); } \
  NS_IMETHOD Open2(nsIInputStream * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Open2(_retval); } \
  NS_IMETHOD AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncOpen(aListener, aContext); } \
  NS_IMETHOD AsyncOpen2(nsIStreamListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncOpen2(aListener); } \
  NS_IMETHOD GetContentDisposition(uint32_t *aContentDisposition) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentDisposition(aContentDisposition); } \
  NS_IMETHOD SetContentDisposition(uint32_t aContentDisposition) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentDisposition(aContentDisposition); } \
  NS_IMETHOD GetContentDispositionFilename(nsAString & aContentDispositionFilename) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentDispositionFilename(aContentDispositionFilename); } \
  NS_IMETHOD SetContentDispositionFilename(const nsAString & aContentDispositionFilename) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentDispositionFilename(aContentDispositionFilename); } \
  NS_IMETHOD GetContentDispositionHeader(nsACString & aContentDispositionHeader) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentDispositionHeader(aContentDispositionHeader); } \
  NS_IMETHOD GetLoadInfo(nsILoadInfo * *aLoadInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadInfo(aLoadInfo); } \
  NS_IMETHOD SetLoadInfo(nsILoadInfo *aLoadInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoadInfo(aLoadInfo); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsChannel : public nsIChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICHANNEL

  nsChannel();

private:
  ~nsChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsChannel, nsIChannel)

nsChannel::nsChannel()
{
  /* member initializers and constructor code */
}

nsChannel::~nsChannel()
{
  /* destructor code */
}

/* attribute nsIURI originalURI; */
NS_IMETHODIMP nsChannel::GetOriginalURI(nsIURI * *aOriginalURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetOriginalURI(nsIURI *aOriginalURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI URI; */
NS_IMETHODIMP nsChannel::GetURI(nsIURI * *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports owner; */
NS_IMETHODIMP nsChannel::GetOwner(nsISupports * *aOwner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetOwner(nsISupports *aOwner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIInterfaceRequestor notificationCallbacks; */
NS_IMETHODIMP nsChannel::GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports securityInfo; */
NS_IMETHODIMP nsChannel::GetSecurityInfo(nsISupports * *aSecurityInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString contentType; */
NS_IMETHODIMP nsChannel::GetContentType(nsACString & aContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetContentType(const nsACString & aContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString contentCharset; */
NS_IMETHODIMP nsChannel::GetContentCharset(nsACString & aContentCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetContentCharset(const nsACString & aContentCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute int64_t contentLength; */
NS_IMETHODIMP nsChannel::GetContentLength(int64_t *aContentLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetContentLength(int64_t aContentLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIInputStream open (); */
NS_IMETHODIMP nsChannel::Open(nsIInputStream * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIInputStream open2 (); */
NS_IMETHODIMP nsChannel::Open2(nsIInputStream * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void asyncOpen (in nsIStreamListener aListener, in nsISupports aContext); */
NS_IMETHODIMP nsChannel::AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void asyncOpen2 (in nsIStreamListener aListener); */
NS_IMETHODIMP nsChannel::AsyncOpen2(nsIStreamListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long contentDisposition; */
NS_IMETHODIMP nsChannel::GetContentDisposition(uint32_t *aContentDisposition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetContentDisposition(uint32_t aContentDisposition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString contentDispositionFilename; */
NS_IMETHODIMP nsChannel::GetContentDispositionFilename(nsAString & aContentDispositionFilename)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetContentDispositionFilename(const nsAString & aContentDispositionFilename)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString contentDispositionHeader; */
NS_IMETHODIMP nsChannel::GetContentDispositionHeader(nsACString & aContentDispositionHeader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsILoadInfo loadInfo; */
NS_IMETHODIMP nsChannel::GetLoadInfo(nsILoadInfo * *aLoadInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsChannel::SetLoadInfo(nsILoadInfo *aLoadInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIChannel_h__ */
