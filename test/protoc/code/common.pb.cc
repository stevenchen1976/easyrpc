// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#include "common.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
class echo_messageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<echo_message>
      _instance;
} _echo_message_default_instance_;
class auto_weather_messageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<auto_weather_message>
      _instance;
} _auto_weather_message_default_instance_;
namespace protobuf_common_2eproto {
void InitDefaultsecho_messageImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_echo_message_default_instance_;
    new (ptr) ::echo_message();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::echo_message::InitAsDefaultInstance();
}

void InitDefaultsecho_message() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsecho_messageImpl);
}

void InitDefaultsauto_weather_messageImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_auto_weather_message_default_instance_;
    new (ptr) ::auto_weather_message();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::auto_weather_message::InitAsDefaultInstance();
}

void InitDefaultsauto_weather_message() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsauto_weather_messageImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::echo_message, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::echo_message, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::echo_message, age_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auto_weather_message, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auto_weather_message, city_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auto_weather_message, weather_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::echo_message)},
  { 7, -1, sizeof(::auto_weather_message)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_echo_message_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_auto_weather_message_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "common.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014common.proto\")\n\014echo_message\022\014\n\004name\030\001"
      " \001(\t\022\013\n\003age\030\002 \001(\005\":\n\024auto_weather_messag"
      "e\022\021\n\tcity_name\030\001 \001(\t\022\017\n\007weather\030\002 \001(\tb\006p"
      "roto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 125);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "common.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_common_2eproto

// ===================================================================

void echo_message::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int echo_message::kNameFieldNumber;
const int echo_message::kAgeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

echo_message::echo_message()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_common_2eproto::InitDefaultsecho_message();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:echo_message)
}
echo_message::echo_message(const echo_message& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  age_ = from.age_;
  // @@protoc_insertion_point(copy_constructor:echo_message)
}

void echo_message::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  age_ = 0;
  _cached_size_ = 0;
}

echo_message::~echo_message() {
  // @@protoc_insertion_point(destructor:echo_message)
  SharedDtor();
}

void echo_message::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void echo_message::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* echo_message::descriptor() {
  ::protobuf_common_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_common_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const echo_message& echo_message::default_instance() {
  ::protobuf_common_2eproto::InitDefaultsecho_message();
  return *internal_default_instance();
}

echo_message* echo_message::New(::google::protobuf::Arena* arena) const {
  echo_message* n = new echo_message;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void echo_message::Clear() {
// @@protoc_insertion_point(message_clear_start:echo_message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  age_ = 0;
  _internal_metadata_.Clear();
}

bool echo_message::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:echo_message)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "echo_message.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 age = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &age_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:echo_message)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:echo_message)
  return false;
#undef DO_
}

void echo_message::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:echo_message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "echo_message.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // int32 age = 2;
  if (this->age() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->age(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:echo_message)
}

::google::protobuf::uint8* echo_message::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:echo_message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "echo_message.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // int32 age = 2;
  if (this->age() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->age(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:echo_message)
  return target;
}

size_t echo_message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:echo_message)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // int32 age = 2;
  if (this->age() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->age());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void echo_message::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:echo_message)
  GOOGLE_DCHECK_NE(&from, this);
  const echo_message* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const echo_message>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:echo_message)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:echo_message)
    MergeFrom(*source);
  }
}

void echo_message::MergeFrom(const echo_message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:echo_message)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.age() != 0) {
    set_age(from.age());
  }
}

void echo_message::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:echo_message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void echo_message::CopyFrom(const echo_message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:echo_message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool echo_message::IsInitialized() const {
  return true;
}

void echo_message::Swap(echo_message* other) {
  if (other == this) return;
  InternalSwap(other);
}
void echo_message::InternalSwap(echo_message* other) {
  using std::swap;
  name_.Swap(&other->name_);
  swap(age_, other->age_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata echo_message::GetMetadata() const {
  protobuf_common_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_common_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void auto_weather_message::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int auto_weather_message::kCityNameFieldNumber;
const int auto_weather_message::kWeatherFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

auto_weather_message::auto_weather_message()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_common_2eproto::InitDefaultsauto_weather_message();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:auto_weather_message)
}
auto_weather_message::auto_weather_message(const auto_weather_message& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  city_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.city_name().size() > 0) {
    city_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.city_name_);
  }
  weather_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.weather().size() > 0) {
    weather_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.weather_);
  }
  // @@protoc_insertion_point(copy_constructor:auto_weather_message)
}

void auto_weather_message::SharedCtor() {
  city_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  weather_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

auto_weather_message::~auto_weather_message() {
  // @@protoc_insertion_point(destructor:auto_weather_message)
  SharedDtor();
}

void auto_weather_message::SharedDtor() {
  city_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  weather_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void auto_weather_message::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* auto_weather_message::descriptor() {
  ::protobuf_common_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_common_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const auto_weather_message& auto_weather_message::default_instance() {
  ::protobuf_common_2eproto::InitDefaultsauto_weather_message();
  return *internal_default_instance();
}

auto_weather_message* auto_weather_message::New(::google::protobuf::Arena* arena) const {
  auto_weather_message* n = new auto_weather_message;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void auto_weather_message::Clear() {
// @@protoc_insertion_point(message_clear_start:auto_weather_message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  city_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  weather_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool auto_weather_message::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:auto_weather_message)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string city_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_city_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->city_name().data(), static_cast<int>(this->city_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "auto_weather_message.city_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string weather = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_weather()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->weather().data(), static_cast<int>(this->weather().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "auto_weather_message.weather"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:auto_weather_message)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:auto_weather_message)
  return false;
#undef DO_
}

void auto_weather_message::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:auto_weather_message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string city_name = 1;
  if (this->city_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->city_name().data(), static_cast<int>(this->city_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "auto_weather_message.city_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->city_name(), output);
  }

  // string weather = 2;
  if (this->weather().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->weather().data(), static_cast<int>(this->weather().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "auto_weather_message.weather");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->weather(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:auto_weather_message)
}

::google::protobuf::uint8* auto_weather_message::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:auto_weather_message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string city_name = 1;
  if (this->city_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->city_name().data(), static_cast<int>(this->city_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "auto_weather_message.city_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->city_name(), target);
  }

  // string weather = 2;
  if (this->weather().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->weather().data(), static_cast<int>(this->weather().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "auto_weather_message.weather");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->weather(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:auto_weather_message)
  return target;
}

size_t auto_weather_message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:auto_weather_message)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string city_name = 1;
  if (this->city_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->city_name());
  }

  // string weather = 2;
  if (this->weather().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->weather());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void auto_weather_message::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:auto_weather_message)
  GOOGLE_DCHECK_NE(&from, this);
  const auto_weather_message* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const auto_weather_message>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:auto_weather_message)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:auto_weather_message)
    MergeFrom(*source);
  }
}

void auto_weather_message::MergeFrom(const auto_weather_message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:auto_weather_message)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.city_name().size() > 0) {

    city_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.city_name_);
  }
  if (from.weather().size() > 0) {

    weather_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.weather_);
  }
}

void auto_weather_message::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:auto_weather_message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void auto_weather_message::CopyFrom(const auto_weather_message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:auto_weather_message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool auto_weather_message::IsInitialized() const {
  return true;
}

void auto_weather_message::Swap(auto_weather_message* other) {
  if (other == this) return;
  InternalSwap(other);
}
void auto_weather_message::InternalSwap(auto_weather_message* other) {
  using std::swap;
  city_name_.Swap(&other->city_name_);
  weather_.Swap(&other->weather_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata auto_weather_message::GetMetadata() const {
  protobuf_common_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_common_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
