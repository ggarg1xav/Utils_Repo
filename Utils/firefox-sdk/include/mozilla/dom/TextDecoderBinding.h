/* THIS FILE IS AUTOGENERATED FROM TextDecoder.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_TextDecoderBinding_h
#define mozilla_dom_TextDecoderBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

struct NativePropertyHooks;
class ProtoAndIfaceCache;
struct TextDecodeOptionsAtoms;
class TextDecoder;
struct TextDecoderAtoms;
struct TextDecoderOptionsAtoms;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct TextDecodeOptions : public DictionaryBase
{
  bool mStream;

  TextDecodeOptions();

  explicit inline TextDecodeOptions(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline TextDecodeOptions(const TextDecodeOptions& aOther)
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
  operator=(const TextDecodeOptions& aOther);

private:
  static bool
  InitIds(JSContext* cx, TextDecodeOptionsAtoms* atomsCache);
};

namespace binding_detail {
struct FastTextDecodeOptions : public TextDecodeOptions
{
  inline FastTextDecodeOptions()
    : TextDecodeOptions(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct TextDecoderOptions : public DictionaryBase
{
  bool mFatal;

  TextDecoderOptions();

  explicit inline TextDecoderOptions(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline TextDecoderOptions(const TextDecoderOptions& aOther)
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
  operator=(const TextDecoderOptions& aOther);

private:
  static bool
  InitIds(JSContext* cx, TextDecoderOptionsAtoms* atomsCache);
};

namespace binding_detail {
struct FastTextDecoderOptions : public TextDecoderOptions
{
  inline FastTextDecoderOptions()
    : TextDecoderOptions(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace TextDecoderBinding {

  typedef mozilla::dom::TextDecoder NativeType;

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

  const JSClass*
  GetJSClass();

  bool
  Wrap(JSContext* aCx, mozilla::dom::TextDecoder* aObject, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceCache& aProtoAndIfaceCache, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObjectHandle(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObjectHandle(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

  JSObject*
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

} // namespace TextDecoderBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_TextDecoderBinding_h