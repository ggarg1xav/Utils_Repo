/* THIS FILE IS AUTOGENERATED FROM U2F.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_U2FBinding_h
#define mozilla_dom_U2FBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/ToJSValue.h"

namespace mozilla {
namespace dom {

struct ClientDataAtoms;
struct NativePropertyHooks;
class ProtoAndIfaceCache;
struct RegisterRequestAtoms;
struct RegisterResponse;
struct RegisterResponseAtoms;
struct RegisteredKeyAtoms;
struct SignResponse;
struct SignResponseAtoms;
class U2F;
struct U2FAtoms;
class U2FRegisterCallback;
class U2FSignCallback;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class Transport : uint32_t {
  Bt,
  Ble,
  Nfc,
  Usb,
  EndGuard_
};

namespace TransportValues {
extern const EnumEntry strings[5];
} // namespace TransportValues

bool
ToJSValue(JSContext* aCx, Transport aArgument, JS::MutableHandle<JS::Value> aValue);


struct ClientData : public DictionaryBase
{
  Optional<nsString> mChallenge;
  Optional<nsString> mOrigin;
  Optional<nsString> mTyp;

  ClientData();

  explicit inline ClientData(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline ClientData(const ClientData& aOther)
  {
    *this = aOther;
  }

  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value", bool passedToJSImpl = false);

  bool
  Init(const nsAString& aJSON);

  bool
  ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const;

  bool
  ToJSON(nsAString& aJSON) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const ClientData& aOther);

private:
  static bool
  InitIds(JSContext* cx, ClientDataAtoms* atomsCache);
};

namespace binding_detail {
struct FastClientData : public ClientData
{
  inline FastClientData()
    : ClientData(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RegisterRequest : public DictionaryBase
{
  Optional<nsString> mChallenge;
  Optional<nsString> mVersion;

  RegisterRequest();

  explicit inline RegisterRequest(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RegisterRequest(const RegisterRequest& aOther)
  {
    *this = aOther;
  }

  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value", bool passedToJSImpl = false);

  bool
  Init(const nsAString& aJSON);

  bool
  ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const;

  bool
  ToJSON(nsAString& aJSON) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RegisterRequest& aOther);

private:
  static bool
  InitIds(JSContext* cx, RegisterRequestAtoms* atomsCache);
};

namespace binding_detail {
struct FastRegisterRequest : public RegisterRequest
{
  inline FastRegisterRequest()
    : RegisterRequest(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RegisterResponse : public DictionaryBase
{
  Optional<nsString> mClientData;
  Optional<Nullable<uint16_t>> mErrorCode;
  Optional<nsString> mErrorMessage;
  Optional<nsString> mRegistrationData;
  Optional<nsString> mVersion;

  RegisterResponse();

  explicit inline RegisterResponse(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RegisterResponse(const RegisterResponse& aOther)
  {
    *this = aOther;
  }

  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value", bool passedToJSImpl = false);

  bool
  Init(const nsAString& aJSON);

  bool
  ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const;

  bool
  ToJSON(nsAString& aJSON) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RegisterResponse& aOther);

private:
  static bool
  InitIds(JSContext* cx, RegisterResponseAtoms* atomsCache);
};

namespace binding_detail {
struct FastRegisterResponse : public RegisterResponse
{
  inline FastRegisterResponse()
    : RegisterResponse(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RegisteredKey : public DictionaryBase
{
  Optional<nsString> mAppId;
  Optional<nsString> mKeyHandle;
  Optional<Nullable<Sequence<Transport>>> mTransports;
  Optional<nsString> mVersion;

  RegisteredKey();

  explicit inline RegisteredKey(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RegisteredKey(const RegisteredKey& aOther)
  {
    *this = aOther;
  }

  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value", bool passedToJSImpl = false);

  bool
  Init(const nsAString& aJSON);

  bool
  ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const;

  bool
  ToJSON(nsAString& aJSON) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RegisteredKey& aOther);

private:
  static bool
  InitIds(JSContext* cx, RegisteredKeyAtoms* atomsCache);
};

namespace binding_detail {
struct FastRegisteredKey : public RegisteredKey
{
  inline FastRegisteredKey()
    : RegisteredKey(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct SignResponse : public DictionaryBase
{
  Optional<nsString> mClientData;
  Optional<Nullable<uint16_t>> mErrorCode;
  Optional<nsString> mErrorMessage;
  Optional<nsString> mKeyHandle;
  Optional<nsString> mSignatureData;

  SignResponse();

  explicit inline SignResponse(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline SignResponse(const SignResponse& aOther)
  {
    *this = aOther;
  }

  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value", bool passedToJSImpl = false);

  bool
  Init(const nsAString& aJSON);

  bool
  ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const;

  bool
  ToJSON(nsAString& aJSON) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const SignResponse& aOther);

private:
  static bool
  InitIds(JSContext* cx, SignResponseAtoms* atomsCache);
};

namespace binding_detail {
struct FastSignResponse : public SignResponse
{
  inline FastSignResponse()
    : SignResponse(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


class U2FRegisterCallback : public CallbackFunction
{
public:
  explicit inline U2FRegisterCallback(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCx, aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS::IsCallable(mCallback));
  }

  explicit inline U2FRegisterCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisVal, const RegisterResponse& response, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "U2FRegisterCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext());
    if (!ToJSValue(s.GetContext(), thisVal, &thisValJS)) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    return Call(s.GetContext(), thisValJS, response, aRv);
  }

  inline void
  Call(const RegisterResponse& response, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "U2FRegisterCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, response, aRv);
  }

  template <typename T>
  inline void
  Call(const T& thisVal, const RegisterResponse& response, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(thisVal, response, rv, aExecutionReason);
  }

  inline void
  Call(const RegisterResponse& response, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(response, rv, aExecutionReason, eReportExceptions, nullptr);
  }

  inline bool
  operator==(const U2FRegisterCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, const RegisterResponse& response, ErrorResult& aRv);
};


class U2FSignCallback : public CallbackFunction
{
public:
  explicit inline U2FSignCallback(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCx, aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS::IsCallable(mCallback));
  }

  explicit inline U2FSignCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisVal, const SignResponse& response, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "U2FSignCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext());
    if (!ToJSValue(s.GetContext(), thisVal, &thisValJS)) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    return Call(s.GetContext(), thisValJS, response, aRv);
  }

  inline void
  Call(const SignResponse& response, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "U2FSignCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, response, aRv);
  }

  template <typename T>
  inline void
  Call(const T& thisVal, const SignResponse& response, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(thisVal, response, rv, aExecutionReason);
  }

  inline void
  Call(const SignResponse& response, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(response, rv, aExecutionReason, eReportExceptions, nullptr);
  }

  inline bool
  operator==(const U2FSignCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, const SignResponse& response, ErrorResult& aRv);
};


namespace U2FBinding {

  typedef mozilla::dom::U2F NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];

  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  const JSClass*
  GetJSClass();

  bool
  Wrap(JSContext* aCx, mozilla::dom::U2F* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, T* aObject, JS::Handle<JSObject*> aGivenProto)
  {
    JS::Rooted<JSObject*> reflector(aCx);
    return Wrap(aCx, aObject, aObject, aGivenProto, &reflector) ? reflector.get() : nullptr;
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceCache& aProtoAndIfaceCache, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObjectHandle(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObjectHandle(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

  JSObject*
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

} // namespace U2FBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_U2FBinding_h
