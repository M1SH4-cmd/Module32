// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: company.proto
// Protobuf C++ Version: 5.29.3

#ifndef company_2eproto_2epb_2eh
#define company_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029003
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_company_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_company_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_company_2eproto;
namespace company {
class Company;
struct CompanyDefaultTypeInternal;
extern CompanyDefaultTypeInternal _Company_default_instance_;
}  // namespace company
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace company {

// ===================================================================


// -------------------------------------------------------------------

class Company final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:company.Company) */ {
 public:
  inline Company() : Company(nullptr) {}
  ~Company() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(Company* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(Company));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Company(
      ::google::protobuf::internal::ConstantInitialized);

  inline Company(const Company& from) : Company(nullptr, from) {}
  inline Company(Company&& from) noexcept
      : Company(nullptr, std::move(from)) {}
  inline Company& operator=(const Company& from) {
    CopyFrom(from);
    return *this;
  }
  inline Company& operator=(Company&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Company& default_instance() {
    return *internal_default_instance();
  }
  static inline const Company* internal_default_instance() {
    return reinterpret_cast<const Company*>(
        &_Company_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Company& a, Company& b) { a.Swap(&b); }
  inline void Swap(Company* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Company* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Company* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<Company>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Company& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Company& from) { Company::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return IsInitializedImpl(*this);
  }

  private:
  static bool IsInitializedImpl(const MessageLite& msg);

  public:
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(Company* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "company.Company"; }

 protected:
  explicit Company(::google::protobuf::Arena* arena);
  Company(::google::protobuf::Arena* arena, const Company& from);
  Company(::google::protobuf::Arena* arena, Company&& from) noexcept
      : Company(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::internal::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kLegalAddressFieldNumber = 2,
    kNameFieldNumber = 3,
    kActivityTypeFieldNumber = 4,
    kYearFoundedFieldNumber = 1,
    kForeignEconomicActivityFieldNumber = 5,
  };
  // required string legal_address = 2;
  bool has_legal_address() const;
  void clear_legal_address() ;
  const std::string& legal_address() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_legal_address(Arg_&& arg, Args_... args);
  std::string* mutable_legal_address();
  PROTOBUF_NODISCARD std::string* release_legal_address();
  void set_allocated_legal_address(std::string* value);

  private:
  const std::string& _internal_legal_address() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_legal_address(
      const std::string& value);
  std::string* _internal_mutable_legal_address();

  public:
  // required string name = 3;
  bool has_name() const;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* value);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // optional string activity_type = 4;
  bool has_activity_type() const;
  void clear_activity_type() ;
  const std::string& activity_type() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_activity_type(Arg_&& arg, Args_... args);
  std::string* mutable_activity_type();
  PROTOBUF_NODISCARD std::string* release_activity_type();
  void set_allocated_activity_type(std::string* value);

  private:
  const std::string& _internal_activity_type() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_activity_type(
      const std::string& value);
  std::string* _internal_mutable_activity_type();

  public:
  // required int32 year_founded = 1;
  bool has_year_founded() const;
  void clear_year_founded() ;
  ::int32_t year_founded() const;
  void set_year_founded(::int32_t value);

  private:
  ::int32_t _internal_year_founded() const;
  void _internal_set_year_founded(::int32_t value);

  public:
  // optional bool foreign_economic_activity = 5;
  bool has_foreign_economic_activity() const;
  void clear_foreign_economic_activity() ;
  bool foreign_economic_activity() const;
  void set_foreign_economic_activity(bool value);

  private:
  bool _internal_foreign_economic_activity() const;
  void _internal_set_foreign_economic_activity(bool value);

  public:
  // @@protoc_insertion_point(class_scope:company.Company)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 5, 0,
      54, 2>
      _table_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Company& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr legal_address_;
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::google::protobuf::internal::ArenaStringPtr activity_type_;
    ::int32_t year_founded_;
    bool foreign_economic_activity_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_company_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Company

// required int32 year_founded = 1;
inline bool Company::has_year_founded() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void Company::clear_year_founded() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.year_founded_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int32_t Company::year_founded() const {
  // @@protoc_insertion_point(field_get:company.Company.year_founded)
  return _internal_year_founded();
}
inline void Company::set_year_founded(::int32_t value) {
  _internal_set_year_founded(value);
  _impl_._has_bits_[0] |= 0x00000008u;
  // @@protoc_insertion_point(field_set:company.Company.year_founded)
}
inline ::int32_t Company::_internal_year_founded() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.year_founded_;
}
inline void Company::_internal_set_year_founded(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.year_founded_ = value;
}

// required string legal_address = 2;
inline bool Company::has_legal_address() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Company::clear_legal_address() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.legal_address_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Company::legal_address() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:company.Company.legal_address)
  return _internal_legal_address();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Company::set_legal_address(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.legal_address_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:company.Company.legal_address)
}
inline std::string* Company::mutable_legal_address() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_legal_address();
  // @@protoc_insertion_point(field_mutable:company.Company.legal_address)
  return _s;
}
inline const std::string& Company::_internal_legal_address() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.legal_address_.Get();
}
inline void Company::_internal_set_legal_address(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.legal_address_.Set(value, GetArena());
}
inline std::string* Company::_internal_mutable_legal_address() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.legal_address_.Mutable( GetArena());
}
inline std::string* Company::release_legal_address() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:company.Company.legal_address)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.legal_address_.Release();
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
    _impl_.legal_address_.Set("", GetArena());
  }
  return released;
}
inline void Company::set_allocated_legal_address(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.legal_address_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.legal_address_.IsDefault()) {
    _impl_.legal_address_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:company.Company.legal_address)
}

// required string name = 3;
inline bool Company::has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void Company::clear_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Company::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:company.Company.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Company::set_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:company.Company.name)
}
inline std::string* Company::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:company.Company.name)
  return _s;
}
inline const std::string& Company::_internal_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.name_.Get();
}
inline void Company::_internal_set_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.name_.Set(value, GetArena());
}
inline std::string* Company::_internal_mutable_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* Company::release_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:company.Company.name)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.name_.Release();
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
    _impl_.name_.Set("", GetArena());
  }
  return released;
}
inline void Company::set_allocated_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.name_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:company.Company.name)
}

// optional string activity_type = 4;
inline bool Company::has_activity_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void Company::clear_activity_type() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.activity_type_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Company::activity_type() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:company.Company.activity_type)
  return _internal_activity_type();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Company::set_activity_type(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.activity_type_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:company.Company.activity_type)
}
inline std::string* Company::mutable_activity_type() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_activity_type();
  // @@protoc_insertion_point(field_mutable:company.Company.activity_type)
  return _s;
}
inline const std::string& Company::_internal_activity_type() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.activity_type_.Get();
}
inline void Company::_internal_set_activity_type(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.activity_type_.Set(value, GetArena());
}
inline std::string* Company::_internal_mutable_activity_type() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.activity_type_.Mutable( GetArena());
}
inline std::string* Company::release_activity_type() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:company.Company.activity_type)
  if ((_impl_._has_bits_[0] & 0x00000004u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* released = _impl_.activity_type_.Release();
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
    _impl_.activity_type_.Set("", GetArena());
  }
  return released;
}
inline void Company::set_allocated_activity_type(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.activity_type_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.activity_type_.IsDefault()) {
    _impl_.activity_type_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:company.Company.activity_type)
}

// optional bool foreign_economic_activity = 5;
inline bool Company::has_foreign_economic_activity() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void Company::clear_foreign_economic_activity() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.foreign_economic_activity_ = false;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline bool Company::foreign_economic_activity() const {
  // @@protoc_insertion_point(field_get:company.Company.foreign_economic_activity)
  return _internal_foreign_economic_activity();
}
inline void Company::set_foreign_economic_activity(bool value) {
  _internal_set_foreign_economic_activity(value);
  _impl_._has_bits_[0] |= 0x00000010u;
  // @@protoc_insertion_point(field_set:company.Company.foreign_economic_activity)
}
inline bool Company::_internal_foreign_economic_activity() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.foreign_economic_activity_;
}
inline void Company::_internal_set_foreign_economic_activity(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.foreign_economic_activity_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace company


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // company_2eproto_2epb_2eh
