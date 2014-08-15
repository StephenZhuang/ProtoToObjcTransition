// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/protobuf/unittest_import.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace protobuf_unittest_import {

namespace {

const ::google::protobuf::Descriptor* ImportMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ImportMessage_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ImportEnum_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fimport_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/unittest_import.proto");
  GOOGLE_CHECK(file != NULL);
  ImportMessage_descriptor_ = file->message_type(0);
  static const int ImportMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImportMessage, d_),
  };
  ImportMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ImportMessage_descriptor_,
      ImportMessage::default_instance_,
      ImportMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImportMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImportMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ImportMessage));
  ImportEnum_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2funittest_5fimport_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ImportMessage_descriptor_, &ImportMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_2eproto() {
  delete ImportMessage::default_instance_;
  delete ImportMessage_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n%google/protobuf/unittest_import.proto\022"
    "\030protobuf_unittest_import\"\032\n\rImportMessa"
    "ge\022\t\n\001d\030\001 \001(\005*<\n\nImportEnum\022\016\n\nIMPORT_FO"
    "O\020\007\022\016\n\nIMPORT_BAR\020\010\022\016\n\nIMPORT_BAZ\020\tB\034\n\030c"
    "om.google.protobuf.testH\001", 185);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_import.proto", &protobuf_RegisterTypes);
  ImportMessage::default_instance_ = new ImportMessage();
  ImportMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fimport_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fimport_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2funittest_5fimport_2eproto_;

const ::google::protobuf::EnumDescriptor* ImportEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ImportEnum_descriptor_;
}
bool ImportEnum_IsValid(int value) {
  switch(value) {
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int ImportMessage::kDFieldNumber;
#endif  // !_MSC_VER

ImportMessage::ImportMessage() {
  SharedCtor();
}

void ImportMessage::InitAsDefaultInstance() {
}

ImportMessage::ImportMessage(const ImportMessage& from) {
  SharedCtor();
  MergeFrom(from);
}

void ImportMessage::SharedCtor() {
  _cached_size_ = 0;
  d_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ImportMessage::~ImportMessage() {
  SharedDtor();
}

void ImportMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* ImportMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ImportMessage_descriptor_;
}

const ImportMessage& ImportMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_2eproto();  return *default_instance_;
}

ImportMessage* ImportMessage::default_instance_ = NULL;

ImportMessage* ImportMessage::New() const {
  return new ImportMessage;
}

void ImportMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    d_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ImportMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 d = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &d_));
        _set_bit(0);
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ImportMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    ImportMessage::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 d = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->d(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ImportMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 d = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->d(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ImportMessage::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 d = 1;
    if (has_d()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->d());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void ImportMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ImportMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ImportMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ImportMessage::MergeFrom(const ImportMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_d(from.d());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ImportMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImportMessage::CopyFrom(const ImportMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImportMessage::IsInitialized() const {
  
  return true;
}

void ImportMessage::Swap(ImportMessage* other) {
  if (other != this) {
    std::swap(d_, other->d_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ImportMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ImportMessage_descriptor_;
  metadata.reflection = ImportMessage_reflection_;
  return metadata;
}


}  // namespace protobuf_unittest_import
