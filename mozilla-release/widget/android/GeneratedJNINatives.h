// GENERATED CODE
// Generated by the Java program at /build/annotationProcessors at compile time
// from annotations on Java methods. To update, change the annotations on the
// corresponding Java methods and rerun the build. Manually updating this file
// will cause your build to fail.

#ifndef GeneratedJNINatives_h
#define GeneratedJNINatives_h

#include "GeneratedJNIWrappers.h"
#include "mozilla/jni/Natives.h"

namespace mozilla {
namespace widget {

template<class Impl>
class ANRReporter::Natives : public mozilla::jni::NativeImpl<ANRReporter, Impl>
{
public:
    static constexpr JNINativeMethod methods[] = {

        mozilla::jni::MakeNativeMethod<ANRReporter::GetNativeStack_t>(
                mozilla::jni::NativeStub<ANRReporter::GetNativeStack_t, Impl>
                ::template Wrap<&Impl::GetNativeStack>),

        mozilla::jni::MakeNativeMethod<ANRReporter::ReleaseNativeStack_t>(
                mozilla::jni::NativeStub<ANRReporter::ReleaseNativeStack_t, Impl>
                ::template Wrap<&Impl::ReleaseNativeStack>),

        mozilla::jni::MakeNativeMethod<ANRReporter::RequestNativeStack_t>(
                mozilla::jni::NativeStub<ANRReporter::RequestNativeStack_t, Impl>
                ::template Wrap<&Impl::RequestNativeStack>)
    };
};

template<class Impl>
constexpr JNINativeMethod ANRReporter::Natives<Impl>::methods[];

template<class Impl>
class GeckoJavaSampler::Natives : public mozilla::jni::NativeImpl<GeckoJavaSampler, Impl>
{
public:
    static constexpr JNINativeMethod methods[] = {

        mozilla::jni::MakeNativeMethod<GeckoJavaSampler::GetProfilerTime_t>(
                mozilla::jni::NativeStub<GeckoJavaSampler::GetProfilerTime_t, Impl>
                ::template Wrap<&Impl::GetProfilerTime>)
    };
};

template<class Impl>
constexpr JNINativeMethod GeckoJavaSampler::Natives<Impl>::methods[];

template<class Impl>
class GeckoThread::Natives : public mozilla::jni::NativeImpl<GeckoThread, Impl>
{
public:
    static constexpr JNINativeMethod methods[] = {

        mozilla::jni::MakeNativeMethod<GeckoThread::SpeculativeConnect_t>(
                mozilla::jni::NativeStub<GeckoThread::SpeculativeConnect_t, Impl>
                ::template Wrap<&Impl::SpeculativeConnect>)
    };
};

template<class Impl>
constexpr JNINativeMethod GeckoThread::Natives<Impl>::methods[];

template<class Impl>
class NativeJSContainer::Natives : public mozilla::jni::NativeImpl<NativeJSContainer, Impl>
{
public:
    static constexpr JNINativeMethod methods[] = {

        mozilla::jni::MakeNativeMethod<NativeJSContainer::Clone2_t>(
                mozilla::jni::NativeStub<NativeJSContainer::Clone2_t, Impl>
                ::template Wrap<&Impl::Clone>),

        mozilla::jni::MakeNativeMethod<NativeJSContainer::DisposeNative_t>(
                mozilla::jni::NativeStub<NativeJSContainer::DisposeNative_t, Impl>
                ::template Wrap<&Impl::DisposeNative>)
    };
};

template<class Impl>
constexpr JNINativeMethod NativeJSContainer::Natives<Impl>::methods[];

template<class Impl>
class NativeJSObject::Natives : public mozilla::jni::NativeImpl<NativeJSObject, Impl>
{
public:
    static constexpr JNINativeMethod methods[] = {

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetBoolean_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetBoolean_t, Impl>
                ::template Wrap<&Impl::GetBoolean>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetBooleanArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetBooleanArray_t, Impl>
                ::template Wrap<&Impl::GetBooleanArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetBundle_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetBundle_t, Impl>
                ::template Wrap<&Impl::GetBundle>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetBundleArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetBundleArray_t, Impl>
                ::template Wrap<&Impl::GetBundleArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetDouble_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetDouble_t, Impl>
                ::template Wrap<&Impl::GetDouble>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetDoubleArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetDoubleArray_t, Impl>
                ::template Wrap<&Impl::GetDoubleArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetInt_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetInt_t, Impl>
                ::template Wrap<&Impl::GetInt>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetIntArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetIntArray_t, Impl>
                ::template Wrap<&Impl::GetIntArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetObject_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetObject_t, Impl>
                ::template Wrap<&Impl::GetObject>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetObjectArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetObjectArray_t, Impl>
                ::template Wrap<&Impl::GetObjectArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetString_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetString_t, Impl>
                ::template Wrap<&Impl::GetString>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::GetStringArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::GetStringArray_t, Impl>
                ::template Wrap<&Impl::GetStringArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::Has_t>(
                mozilla::jni::NativeStub<NativeJSObject::Has_t, Impl>
                ::template Wrap<&Impl::Has>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptBoolean_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptBoolean_t, Impl>
                ::template Wrap<&Impl::OptBoolean>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptBooleanArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptBooleanArray_t, Impl>
                ::template Wrap<&Impl::OptBooleanArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptBundle_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptBundle_t, Impl>
                ::template Wrap<&Impl::OptBundle>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptBundleArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptBundleArray_t, Impl>
                ::template Wrap<&Impl::OptBundleArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptDouble_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptDouble_t, Impl>
                ::template Wrap<&Impl::OptDouble>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptDoubleArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptDoubleArray_t, Impl>
                ::template Wrap<&Impl::OptDoubleArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptInt_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptInt_t, Impl>
                ::template Wrap<&Impl::OptInt>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptIntArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptIntArray_t, Impl>
                ::template Wrap<&Impl::OptIntArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptObject_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptObject_t, Impl>
                ::template Wrap<&Impl::OptObject>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptObjectArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptObjectArray_t, Impl>
                ::template Wrap<&Impl::OptObjectArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptString_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptString_t, Impl>
                ::template Wrap<&Impl::OptString>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::OptStringArray_t>(
                mozilla::jni::NativeStub<NativeJSObject::OptStringArray_t, Impl>
                ::template Wrap<&Impl::OptStringArray>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::ToBundle_t>(
                mozilla::jni::NativeStub<NativeJSObject::ToBundle_t, Impl>
                ::template Wrap<&Impl::ToBundle>),

        mozilla::jni::MakeNativeMethod<NativeJSObject::ToString_t>(
                mozilla::jni::NativeStub<NativeJSObject::ToString_t, Impl>
                ::template Wrap<&Impl::ToString>)
    };
};

template<class Impl>
constexpr JNINativeMethod NativeJSObject::Natives<Impl>::methods[];

} /* widget */
} /* mozilla */
#endif // GeneratedJNINatives_h