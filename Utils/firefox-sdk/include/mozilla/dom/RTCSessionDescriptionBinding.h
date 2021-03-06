/* THIS FILE IS AUTOGENERATED FROM RTCSessionDescription.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_RTCSessionDescriptionBinding_h
#define mozilla_dom_RTCSessionDescriptionBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/CallbackInterface.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/ToJSValue.h"
#include "nsWeakReference.h"

namespace mozilla {
namespace dom {

struct NativePropertyHooks;
class ProtoAndIfaceCache;
class RTCSessionDescription;
struct RTCSessionDescriptionAtoms;
struct RTCSessionDescriptionInit;
struct RTCSessionDescriptionInitAtoms;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class RTCSdpType : uint32_t {
  Offer,
  Pranswer,
  Answer,
  Rollback,
  EndGuard_
};

namespace RTCSdpTypeValues {
extern const EnumEntry strings[5];
} // namespace RTCSdpTypeValues

bool
ToJSValue(JSContext* aCx, RTCSdpType aArgument, JS::MutableHandle<JS::Value> aValue);


struct RTCSessionDescriptionInit : public DictionaryBase
{
  nsString mSdp;
  Nullable<RTCSdpType> mType;

  RTCSessionDescriptionInit();

  explicit inline RTCSessionDescriptionInit(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCSessionDescriptionInit(const RTCSessionDescriptionInit& aOther)
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
  operator=(const RTCSessionDescriptionInit& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCSessionDescriptionInitAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCSessionDescriptionInit : public RTCSessionDescriptionInit
{
  inline FastRTCSessionDescriptionInit()
    : RTCSessionDescriptionInit(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace RTCSessionDescriptionBinding {

  typedef mozilla::dom::RTCSessionDescription NativeType;

  bool
  JsonifyAttributes(JSContext* aCx, JS::Handle<JSObject*> obj, mozilla::dom::RTCSessionDescription* self, JS::Rooted<JSObject*>& aResult);

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
  Wrap(JSContext* aCx, mozilla::dom::RTCSessionDescription* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

  JSObject*
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObjectHandle(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

  JSObject*
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

} // namespace RTCSessionDescriptionBinding



class RTCSessionDescriptionJSImpl : public CallbackInterface
{
public:
  explicit inline RTCSessionDescriptionJSImpl(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackInterface(aCx, aCallback, aIncumbentGlobal)
  {
  }

  void __Init(const RTCSessionDescriptionInit& descriptionInitDict, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  inline bool
  operator==(const RTCSessionDescriptionJSImpl& aOther) const
  {
    return CallbackInterface::operator==(aOther);
  }

  Nullable<RTCSdpType> GetType(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetSdp(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void SetType(const Nullable<RTCSdpType>& arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void SetSdp(const nsAString& arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

private:
  static bool
  InitIds(JSContext* cx, RTCSessionDescriptionAtoms* atomsCache);
};


class RTCSessionDescription : public nsSupportsWeakReference,
                              public nsWrapperCache
{
public:
  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS(RTCSessionDescription)

private:
  RefPtr<RTCSessionDescriptionJSImpl> mImpl;
  nsCOMPtr<nsISupports> mParent;

public:
  RTCSessionDescription(JS::Handle<JSObject*> aJSImplObject, nsIGlobalObject* aParent);

protected:
  virtual ~RTCSessionDescription();

public:
  nsISupports* GetParentObject() const;

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  static already_AddRefed<RTCSessionDescription> Constructor(const GlobalObject& global, JSContext* cx, const RTCSessionDescriptionInit& descriptionInitDict, ErrorResult& aRv);

  Nullable<RTCSdpType> GetType(ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void SetType(const Nullable<RTCSdpType>& arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetSdp(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void SetSdp(const nsAString& arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  static bool
  _Create(JSContext* cx, unsigned argc, JS::Value* vp);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_RTCSessionDescriptionBinding_h
