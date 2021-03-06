/* THIS FILE IS AUTOGENERATED FROM PerformanceObserver.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_PerformanceObserverBinding_h
#define mozilla_dom_PerformanceObserverBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/ToJSValue.h"

namespace mozilla {
namespace dom {

struct NativePropertyHooks;
class PerformanceObserver;
struct PerformanceObserverAtoms;
class PerformanceObserverCallback;
class PerformanceObserverEntryList;
struct PerformanceObserverInitAtoms;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct PerformanceObserverInit : public DictionaryBase
{
  Sequence<nsString> mEntryTypes;

  PerformanceObserverInit();

  explicit inline PerformanceObserverInit(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline PerformanceObserverInit(const PerformanceObserverInit& aOther)
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
  operator=(const PerformanceObserverInit& aOther);

private:
  static bool
  InitIds(JSContext* cx, PerformanceObserverInitAtoms* atomsCache);
};

namespace binding_detail {
struct FastPerformanceObserverInit : public PerformanceObserverInit
{
  inline FastPerformanceObserverInit()
    : PerformanceObserverInit(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


class PerformanceObserverCallback : public CallbackFunction
{
public:
  explicit inline PerformanceObserverCallback(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCx, aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS::IsCallable(mCallback));
  }

  explicit inline PerformanceObserverCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisVal, PerformanceObserverEntryList& entries, PerformanceObserver& observer, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "PerformanceObserverCallback";
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
    return Call(s.GetContext(), thisValJS, entries, observer, aRv);
  }

  inline void
  Call(PerformanceObserverEntryList& entries, PerformanceObserver& observer, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "PerformanceObserverCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, entries, observer, aRv);
  }

  template <typename T>
  inline void
  Call(const T& thisVal, PerformanceObserverEntryList& entries, PerformanceObserver& observer, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(thisVal, entries, observer, rv, aExecutionReason);
  }

  inline void
  Call(PerformanceObserverEntryList& entries, PerformanceObserver& observer, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(entries, observer, rv, aExecutionReason, eReportExceptions, nullptr);
  }

  inline bool
  operator==(const PerformanceObserverCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, PerformanceObserverEntryList& entries, PerformanceObserver& observer, ErrorResult& aRv);
};


namespace PerformanceObserverBinding {

  typedef mozilla::dom::PerformanceObserver NativeType;

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
  Wrap(JSContext* aCx, mozilla::dom::PerformanceObserver* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace PerformanceObserverBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_PerformanceObserverBinding_h
