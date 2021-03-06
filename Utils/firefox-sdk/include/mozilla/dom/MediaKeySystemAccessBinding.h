/* THIS FILE IS AUTOGENERATED FROM MediaKeySystemAccess.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_MediaKeySystemAccessBinding_h
#define mozilla_dom_MediaKeySystemAccessBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

class MediaKeySystemAccess;
struct MediaKeySystemAccessAtoms;
struct MediaKeySystemConfigurationAtoms;
struct MediaKeySystemMediaCapability;
struct MediaKeySystemMediaCapabilityAtoms;
struct NativePropertyHooks;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct MediaKeySystemMediaCapability : public DictionaryBase
{
  nsString mContentType;

  MediaKeySystemMediaCapability();

  explicit inline MediaKeySystemMediaCapability(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MediaKeySystemMediaCapability(const MediaKeySystemMediaCapability& aOther)
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
  operator=(const MediaKeySystemMediaCapability& aOther);

private:
  static bool
  InitIds(JSContext* cx, MediaKeySystemMediaCapabilityAtoms* atomsCache);
};

namespace binding_detail {
struct FastMediaKeySystemMediaCapability : public MediaKeySystemMediaCapability
{
  inline FastMediaKeySystemMediaCapability()
    : MediaKeySystemMediaCapability(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MediaKeySystemConfiguration : public DictionaryBase
{
  Optional<Sequence<MediaKeySystemMediaCapability>> mAudioCapabilities;
  nsString mAudioType;
  nsString mInitDataType;
  Optional<Sequence<nsString>> mInitDataTypes;
  nsString mLabel;
  Optional<Sequence<MediaKeySystemMediaCapability>> mVideoCapabilities;
  nsString mVideoType;

  MediaKeySystemConfiguration();

  explicit inline MediaKeySystemConfiguration(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MediaKeySystemConfiguration(const MediaKeySystemConfiguration& aOther)
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
  operator=(const MediaKeySystemConfiguration& aOther);

private:
  static bool
  InitIds(JSContext* cx, MediaKeySystemConfigurationAtoms* atomsCache);
};

namespace binding_detail {
struct FastMediaKeySystemConfiguration : public MediaKeySystemConfiguration
{
  inline FastMediaKeySystemConfiguration()
    : MediaKeySystemConfiguration(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace MediaKeySystemAccessBinding {

  typedef mozilla::dom::MediaKeySystemAccess NativeType;

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
  Wrap(JSContext* aCx, mozilla::dom::MediaKeySystemAccess* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace MediaKeySystemAccessBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_MediaKeySystemAccessBinding_h
