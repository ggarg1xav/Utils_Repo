/* THIS FILE IS AUTOGENERATED FROM RTCRtpSender.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_RTCRtpSenderBinding_h
#define mozilla_dom_RTCRtpSenderBinding_h

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

class MediaStreamTrack;
struct NativePropertyHooks;
class Promise;
class ProtoAndIfaceCache;
struct RTCFecParameters;
struct RTCFecParametersAtoms;
struct RTCRtcpParameters;
struct RTCRtcpParametersAtoms;
struct RTCRtpCodecParameters;
struct RTCRtpCodecParametersAtoms;
struct RTCRtpEncodingParameters;
struct RTCRtpEncodingParametersAtoms;
struct RTCRtpHeaderExtensionParameters;
struct RTCRtpHeaderExtensionParametersAtoms;
struct RTCRtpParameters;
struct RTCRtpParametersAtoms;
class RTCRtpSender;
struct RTCRtpSenderAtoms;
struct RTCRtxParameters;
struct RTCRtxParametersAtoms;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class RTCPriorityType : uint32_t {
  Very_low,
  Low,
  Medium,
  High,
  EndGuard_
};

namespace RTCPriorityTypeValues {
extern const EnumEntry strings[5];
} // namespace RTCPriorityTypeValues

bool
ToJSValue(JSContext* aCx, RTCPriorityType aArgument, JS::MutableHandle<JS::Value> aValue);


enum class RTCDegradationPreference : uint32_t {
  Maintain_framerate,
  Maintain_resolution,
  Balanced,
  EndGuard_
};

namespace RTCDegradationPreferenceValues {
extern const EnumEntry strings[4];
} // namespace RTCDegradationPreferenceValues

bool
ToJSValue(JSContext* aCx, RTCDegradationPreference aArgument, JS::MutableHandle<JS::Value> aValue);


struct RTCFecParameters : public DictionaryBase
{
  Optional<uint32_t> mSsrc;

  RTCFecParameters();

  explicit inline RTCFecParameters(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCFecParameters(const RTCFecParameters& aOther)
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
  operator=(const RTCFecParameters& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCFecParametersAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCFecParameters : public RTCFecParameters
{
  inline FastRTCFecParameters()
    : RTCFecParameters(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCRtcpParameters : public DictionaryBase
{
  Optional<nsString> mCname;
  Optional<bool> mReducedSize;

  RTCRtcpParameters();

  explicit inline RTCRtcpParameters(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCRtcpParameters(const RTCRtcpParameters& aOther)
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
  operator=(const RTCRtcpParameters& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCRtcpParametersAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCRtcpParameters : public RTCRtcpParameters
{
  inline FastRTCRtcpParameters()
    : RTCRtcpParameters(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCRtpCodecParameters : public DictionaryBase
{
  uint16_t mChannels;
  Optional<uint32_t> mClockRate;
  Optional<nsString> mMimeType;
  Optional<uint16_t> mPayloadType;
  Optional<nsString> mSdpFmtpLine;

  RTCRtpCodecParameters();

  explicit inline RTCRtpCodecParameters(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCRtpCodecParameters(const RTCRtpCodecParameters& aOther)
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
  operator=(const RTCRtpCodecParameters& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCRtpCodecParametersAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCRtpCodecParameters : public RTCRtpCodecParameters
{
  inline FastRTCRtpCodecParameters()
    : RTCRtpCodecParameters(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCRtpHeaderExtensionParameters : public DictionaryBase
{
  Optional<bool> mEncrypted;
  Optional<uint16_t> mId;
  Optional<nsString> mUri;

  RTCRtpHeaderExtensionParameters();

  explicit inline RTCRtpHeaderExtensionParameters(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCRtpHeaderExtensionParameters(const RTCRtpHeaderExtensionParameters& aOther)
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
  operator=(const RTCRtpHeaderExtensionParameters& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCRtpHeaderExtensionParametersAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCRtpHeaderExtensionParameters : public RTCRtpHeaderExtensionParameters
{
  inline FastRTCRtpHeaderExtensionParameters()
    : RTCRtpHeaderExtensionParameters(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCRtxParameters : public DictionaryBase
{
  Optional<uint32_t> mSsrc;

  RTCRtxParameters();

  explicit inline RTCRtxParameters(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCRtxParameters(const RTCRtxParameters& aOther)
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
  operator=(const RTCRtxParameters& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCRtxParametersAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCRtxParameters : public RTCRtxParameters
{
  inline FastRTCRtxParameters()
    : RTCRtxParameters(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCRtpEncodingParameters : public DictionaryBase
{
  Optional<bool> mActive;
  RTCDegradationPreference mDegradationPreference;
  RTCFecParameters mFec;
  Optional<uint32_t> mMaxBitrate;
  Optional<RTCPriorityType> mPriority;
  Optional<nsString> mRid;
  RTCRtxParameters mRtx;
  float mScaleResolutionDownBy;
  Optional<uint32_t> mSsrc;

  RTCRtpEncodingParameters();

  explicit inline RTCRtpEncodingParameters(const FastDictionaryInitializer& )
    : mFec(FastDictionaryInitializer()),
      mRtx(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCRtpEncodingParameters(const RTCRtpEncodingParameters& aOther)
    : mFec(FastDictionaryInitializer()),
      mRtx(FastDictionaryInitializer())
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
  operator=(const RTCRtpEncodingParameters& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCRtpEncodingParametersAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCRtpEncodingParameters : public RTCRtpEncodingParameters
{
  inline FastRTCRtpEncodingParameters()
    : RTCRtpEncodingParameters(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCRtpParameters : public DictionaryBase
{
  Optional<Sequence<RTCRtpCodecParameters>> mCodecs;
  Optional<Sequence<RTCRtpEncodingParameters>> mEncodings;
  Optional<Sequence<RTCRtpHeaderExtensionParameters>> mHeaderExtensions;
  RTCRtcpParameters mRtcp;

  RTCRtpParameters();

  explicit inline RTCRtpParameters(const FastDictionaryInitializer& )
    : mRtcp(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCRtpParameters(const RTCRtpParameters& aOther)
    : mRtcp(FastDictionaryInitializer())
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
  operator=(const RTCRtpParameters& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCRtpParametersAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCRtpParameters : public RTCRtpParameters
{
  inline FastRTCRtpParameters()
    : RTCRtpParameters(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace RTCRtpSenderBinding {

  typedef mozilla::dom::RTCRtpSender NativeType;

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
  Wrap(JSContext* aCx, mozilla::dom::RTCRtpSender* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace RTCRtpSenderBinding



class RTCRtpSenderJSImpl : public CallbackInterface
{
public:
  explicit inline RTCRtpSenderJSImpl(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackInterface(aCx, aCallback, aIncumbentGlobal)
  {
  }

  already_AddRefed<Promise> SetParameters(const RTCRtpParameters& parameters, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetParameters(RTCRtpParameters& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  already_AddRefed<Promise> ReplaceTrack(MediaStreamTrack& track, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  inline bool
  operator==(const RTCRtpSenderJSImpl& aOther) const
  {
    return CallbackInterface::operator==(aOther);
  }

  already_AddRefed<MediaStreamTrack> GetTrack(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

private:
  static bool
  InitIds(JSContext* cx, RTCRtpSenderAtoms* atomsCache);
};


class RTCRtpSender final : public nsSupportsWeakReference,
                           public nsWrapperCache
{
public:
  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS(RTCRtpSender)

private:
  RefPtr<RTCRtpSenderJSImpl> mImpl;
  nsCOMPtr<nsISupports> mParent;

public:
  RTCRtpSender(JS::Handle<JSObject*> aJSImplObject, nsIGlobalObject* aParent);

private:
  ~RTCRtpSender();

public:
  nsISupports* GetParentObject() const;

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  // Return a raw pointer here to avoid refcounting, but make sure it's safe (the object should be kept alive by the callee).
  already_AddRefed<MediaStreamTrack> GetTrack(ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  // Return a raw pointer here to avoid refcounting, but make sure it's safe (the object should be kept alive by the callee).
  already_AddRefed<Promise> SetParameters(const RTCRtpParameters& parameters, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetParameters(RTCRtpParameters& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  // Return a raw pointer here to avoid refcounting, but make sure it's safe (the object should be kept alive by the callee).
  already_AddRefed<Promise> ReplaceTrack(MediaStreamTrack& track, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  static bool
  _Create(JSContext* cx, unsigned argc, JS::Value* vp);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_RTCRtpSenderBinding_h
