// Autogenerated from Pigeon (v6.0.1), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#undef _HAS_EXCEPTIONS

#include "messages.h"

#include <flutter/basic_message_channel.h>
#include <flutter/binary_messenger.h>
#include <flutter/encodable_value.h>
#include <flutter/standard_message_codec.h>

#include <map>
#include <optional>
#include <string>

// TextureMessage

int64_t TextureMessage::texture_id() const { return texture_id_; }
void TextureMessage::set_texture_id(int64_t value_arg) {
  texture_id_ = value_arg;
}

flutter::EncodableList TextureMessage::ToEncodableList() const {
  return flutter::EncodableList{
      flutter::EncodableValue(texture_id_),
  };
}

TextureMessage::TextureMessage() {}

TextureMessage::TextureMessage(const flutter::EncodableList& list) {
  auto& encodable_texture_id = list[0];
  if (const int32_t* pointer_texture_id =
          std::get_if<int32_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id;
  else if (const int64_t* pointer_texture_id_64 =
               std::get_if<int64_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id_64;
}

// LoopingMessage

int64_t LoopingMessage::texture_id() const { return texture_id_; }
void LoopingMessage::set_texture_id(int64_t value_arg) {
  texture_id_ = value_arg;
}

bool LoopingMessage::is_looping() const { return is_looping_; }
void LoopingMessage::set_is_looping(bool value_arg) { is_looping_ = value_arg; }

flutter::EncodableList LoopingMessage::ToEncodableList() const {
  return flutter::EncodableList{
      flutter::EncodableValue(texture_id_),
      flutter::EncodableValue(is_looping_),
  };
}

LoopingMessage::LoopingMessage() {}

LoopingMessage::LoopingMessage(const flutter::EncodableList& list) {
  auto& encodable_texture_id = list[0];
  if (const int32_t* pointer_texture_id =
          std::get_if<int32_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id;
  else if (const int64_t* pointer_texture_id_64 =
               std::get_if<int64_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id_64;
  auto& encodable_is_looping = list[1];
  if (const bool* pointer_is_looping =
          std::get_if<bool>(&encodable_is_looping)) {
    is_looping_ = *pointer_is_looping;
  }
}

// VolumeMessage

int64_t VolumeMessage::texture_id() const { return texture_id_; }
void VolumeMessage::set_texture_id(int64_t value_arg) {
  texture_id_ = value_arg;
}

double VolumeMessage::volume() const { return volume_; }
void VolumeMessage::set_volume(double value_arg) { volume_ = value_arg; }

flutter::EncodableList VolumeMessage::ToEncodableList() const {
  return flutter::EncodableList{
      flutter::EncodableValue(texture_id_),
      flutter::EncodableValue(volume_),
  };
}

VolumeMessage::VolumeMessage() {}

VolumeMessage::VolumeMessage(const flutter::EncodableList& list) {
  auto& encodable_texture_id = list[0];
  if (const int32_t* pointer_texture_id =
          std::get_if<int32_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id;
  else if (const int64_t* pointer_texture_id_64 =
               std::get_if<int64_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id_64;
  auto& encodable_volume = list[1];
  if (const double* pointer_volume = std::get_if<double>(&encodable_volume)) {
    volume_ = *pointer_volume;
  }
}

// PlaybackSpeedMessage

int64_t PlaybackSpeedMessage::texture_id() const { return texture_id_; }
void PlaybackSpeedMessage::set_texture_id(int64_t value_arg) {
  texture_id_ = value_arg;
}

double PlaybackSpeedMessage::speed() const { return speed_; }
void PlaybackSpeedMessage::set_speed(double value_arg) { speed_ = value_arg; }

flutter::EncodableList PlaybackSpeedMessage::ToEncodableList() const {
  return flutter::EncodableList{
      flutter::EncodableValue(texture_id_),
      flutter::EncodableValue(speed_),
  };
}

PlaybackSpeedMessage::PlaybackSpeedMessage() {}

PlaybackSpeedMessage::PlaybackSpeedMessage(const flutter::EncodableList& list) {
  auto& encodable_texture_id = list[0];
  if (const int32_t* pointer_texture_id =
          std::get_if<int32_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id;
  else if (const int64_t* pointer_texture_id_64 =
               std::get_if<int64_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id_64;
  auto& encodable_speed = list[1];
  if (const double* pointer_speed = std::get_if<double>(&encodable_speed)) {
    speed_ = *pointer_speed;
  }
}

// PositionMessage

int64_t PositionMessage::texture_id() const { return texture_id_; }
void PositionMessage::set_texture_id(int64_t value_arg) {
  texture_id_ = value_arg;
}

int64_t PositionMessage::position() const { return position_; }
void PositionMessage::set_position(int64_t value_arg) { position_ = value_arg; }

flutter::EncodableList PositionMessage::ToEncodableList() const {
  return flutter::EncodableList{
      flutter::EncodableValue(texture_id_),
      flutter::EncodableValue(position_),
  };
}

PositionMessage::PositionMessage() {}

PositionMessage::PositionMessage(const flutter::EncodableList& list) {
  auto& encodable_texture_id = list[0];
  if (const int32_t* pointer_texture_id =
          std::get_if<int32_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id;
  else if (const int64_t* pointer_texture_id_64 =
               std::get_if<int64_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id_64;
  auto& encodable_position = list[1];
  if (const int32_t* pointer_position =
          std::get_if<int32_t>(&encodable_position))
    position_ = *pointer_position;
  else if (const int64_t* pointer_position_64 =
               std::get_if<int64_t>(&encodable_position))
    position_ = *pointer_position_64;
}

// CreateMessage

const std::string* CreateMessage::asset() const {
  return asset_ ? &(*asset_) : nullptr;
}
void CreateMessage::set_asset(const std::string_view* value_arg) {
  asset_ = value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void CreateMessage::set_asset(std::string_view value_arg) {
  asset_ = value_arg;
}

const std::string* CreateMessage::uri() const {
  return uri_ ? &(*uri_) : nullptr;
}
void CreateMessage::set_uri(const std::string_view* value_arg) {
  uri_ = value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void CreateMessage::set_uri(std::string_view value_arg) { uri_ = value_arg; }

const std::string* CreateMessage::package_name() const {
  return package_name_ ? &(*package_name_) : nullptr;
}
void CreateMessage::set_package_name(const std::string_view* value_arg) {
  package_name_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void CreateMessage::set_package_name(std::string_view value_arg) {
  package_name_ = value_arg;
}

const std::string* CreateMessage::format_hint() const {
  return format_hint_ ? &(*format_hint_) : nullptr;
}
void CreateMessage::set_format_hint(const std::string_view* value_arg) {
  format_hint_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void CreateMessage::set_format_hint(std::string_view value_arg) {
  format_hint_ = value_arg;
}

const flutter::EncodableMap& CreateMessage::http_headers() const {
  return http_headers_;
}
void CreateMessage::set_http_headers(const flutter::EncodableMap& value_arg) {
  http_headers_ = value_arg;
}

flutter::EncodableList CreateMessage::ToEncodableList() const {
  return flutter::EncodableList{
      asset_ ? flutter::EncodableValue(*asset_) : flutter::EncodableValue(),
      uri_ ? flutter::EncodableValue(*uri_) : flutter::EncodableValue(),
      package_name_ ? flutter::EncodableValue(*package_name_)
                    : flutter::EncodableValue(),
      format_hint_ ? flutter::EncodableValue(*format_hint_)
                   : flutter::EncodableValue(),
      flutter::EncodableValue(http_headers_),
  };
}

CreateMessage::CreateMessage() {}

CreateMessage::CreateMessage(const flutter::EncodableList& list) {
  auto& encodable_asset = list[0];
  if (const std::string* pointer_asset =
          std::get_if<std::string>(&encodable_asset)) {
    asset_ = *pointer_asset;
  }
  auto& encodable_uri = list[1];
  if (const std::string* pointer_uri =
          std::get_if<std::string>(&encodable_uri)) {
    uri_ = *pointer_uri;
  }
  auto& encodable_package_name = list[2];
  if (const std::string* pointer_package_name =
          std::get_if<std::string>(&encodable_package_name)) {
    package_name_ = *pointer_package_name;
  }
  auto& encodable_format_hint = list[3];
  if (const std::string* pointer_format_hint =
          std::get_if<std::string>(&encodable_format_hint)) {
    format_hint_ = *pointer_format_hint;
  }
  auto& encodable_http_headers = list[4];
  if (const flutter::EncodableMap* pointer_http_headers =
          std::get_if<flutter::EncodableMap>(&encodable_http_headers)) {
    http_headers_ = *pointer_http_headers;
  }
}

// MixWithOthersMessage

bool MixWithOthersMessage::mix_with_others() const { return mix_with_others_; }
void MixWithOthersMessage::set_mix_with_others(bool value_arg) {
  mix_with_others_ = value_arg;
}

flutter::EncodableList MixWithOthersMessage::ToEncodableList() const {
  return flutter::EncodableList{
      flutter::EncodableValue(mix_with_others_),
  };
}

MixWithOthersMessage::MixWithOthersMessage() {}

MixWithOthersMessage::MixWithOthersMessage(const flutter::EncodableList& list) {
  auto& encodable_mix_with_others = list[0];
  if (const bool* pointer_mix_with_others =
          std::get_if<bool>(&encodable_mix_with_others)) {
    mix_with_others_ = *pointer_mix_with_others;
  }
}

TizenVideoPlayerApiCodecSerializer::TizenVideoPlayerApiCodecSerializer() {}
flutter::EncodableValue TizenVideoPlayerApiCodecSerializer::ReadValueOfType(
    uint8_t type, flutter::ByteStreamReader* stream) const {
  switch (type) {
    case 128:
      return flutter::CustomEncodableValue(
          CreateMessage(std::get<flutter::EncodableList>(ReadValue(stream))));

    case 129:
      return flutter::CustomEncodableValue(
          LoopingMessage(std::get<flutter::EncodableList>(ReadValue(stream))));

    case 130:
      return flutter::CustomEncodableValue(MixWithOthersMessage(
          std::get<flutter::EncodableList>(ReadValue(stream))));

    case 131:
      return flutter::CustomEncodableValue(PlaybackSpeedMessage(
          std::get<flutter::EncodableList>(ReadValue(stream))));

    case 132:
      return flutter::CustomEncodableValue(
          PositionMessage(std::get<flutter::EncodableList>(ReadValue(stream))));

    case 133:
      return flutter::CustomEncodableValue(
          TextureMessage(std::get<flutter::EncodableList>(ReadValue(stream))));

    case 134:
      return flutter::CustomEncodableValue(
          VolumeMessage(std::get<flutter::EncodableList>(ReadValue(stream))));

    default:
      return flutter::StandardCodecSerializer::ReadValueOfType(type, stream);
  }
}

void TizenVideoPlayerApiCodecSerializer::WriteValue(
    const flutter::EncodableValue& value,
    flutter::ByteStreamWriter* stream) const {
  if (const flutter::CustomEncodableValue* custom_value =
          std::get_if<flutter::CustomEncodableValue>(&value)) {
    if (custom_value->type() == typeid(CreateMessage)) {
      stream->WriteByte(128);
      WriteValue(
          flutter::EncodableValue(
              std::any_cast<CreateMessage>(*custom_value).ToEncodableList()),
          stream);
      return;
    }
    if (custom_value->type() == typeid(LoopingMessage)) {
      stream->WriteByte(129);
      WriteValue(
          flutter::EncodableValue(
              std::any_cast<LoopingMessage>(*custom_value).ToEncodableList()),
          stream);
      return;
    }
    if (custom_value->type() == typeid(MixWithOthersMessage)) {
      stream->WriteByte(130);
      WriteValue(flutter::EncodableValue(
                     std::any_cast<MixWithOthersMessage>(*custom_value)
                         .ToEncodableList()),
                 stream);
      return;
    }
    if (custom_value->type() == typeid(PlaybackSpeedMessage)) {
      stream->WriteByte(131);
      WriteValue(flutter::EncodableValue(
                     std::any_cast<PlaybackSpeedMessage>(*custom_value)
                         .ToEncodableList()),
                 stream);
      return;
    }
    if (custom_value->type() == typeid(PositionMessage)) {
      stream->WriteByte(132);
      WriteValue(
          flutter::EncodableValue(
              std::any_cast<PositionMessage>(*custom_value).ToEncodableList()),
          stream);
      return;
    }
    if (custom_value->type() == typeid(TextureMessage)) {
      stream->WriteByte(133);
      WriteValue(
          flutter::EncodableValue(
              std::any_cast<TextureMessage>(*custom_value).ToEncodableList()),
          stream);
      return;
    }
    if (custom_value->type() == typeid(VolumeMessage)) {
      stream->WriteByte(134);
      WriteValue(
          flutter::EncodableValue(
              std::any_cast<VolumeMessage>(*custom_value).ToEncodableList()),
          stream);
      return;
    }
  }
  flutter::StandardCodecSerializer::WriteValue(value, stream);
}

/// The codec used by TizenVideoPlayerApi.
const flutter::StandardMessageCodec& TizenVideoPlayerApi::GetCodec() {
  return flutter::StandardMessageCodec::GetInstance(
      &TizenVideoPlayerApiCodecSerializer::GetInstance());
}

// Sets up an instance of `TizenVideoPlayerApi` to handle messages through the
// `binary_messenger`.
void TizenVideoPlayerApi::SetUp(flutter::BinaryMessenger* binary_messenger,
                                TizenVideoPlayerApi* api) {
  {
    auto channel = std::make_unique<flutter::BasicMessageChannel<>>(
        binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.initialize",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            try {
              std::optional<FlutterError> output = api->Initialize();
              if (output.has_value()) {
                reply(WrapError(output.value()));
                return;
              }
              flutter::EncodableList wrapped;
              wrapped.push_back(flutter::EncodableValue());
              reply(flutter::EncodableValue(std::move(wrapped)));
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<flutter::BasicMessageChannel<>>(
        binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.create",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                reply(WrapError("msg_arg unexpectedly null."));
                return;
              }
              const auto& msg_arg = std::any_cast<const CreateMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              ErrorOr<TextureMessage> output = api->Create(msg_arg);
              if (output.has_error()) {
                reply(WrapError(output.error()));
                return;
              }
              flutter::EncodableList wrapped;
              wrapped.push_back(
                  flutter::CustomEncodableValue(std::move(output).TakeValue()));
              reply(flutter::EncodableValue(std::move(wrapped)));
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<flutter::BasicMessageChannel<>>(
        binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.dispose",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                reply(WrapError("msg_arg unexpectedly null."));
                return;
              }
              const auto& msg_arg = std::any_cast<const TextureMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output = api->Dispose(msg_arg);
              if (output.has_value()) {
                reply(WrapError(output.value()));
                return;
              }
              flutter::EncodableList wrapped;
              wrapped.push_back(flutter::EncodableValue());
              reply(flutter::EncodableValue(std::move(wrapped)));
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<flutter::BasicMessageChannel<>>(
        binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.setLooping",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                reply(WrapError("msg_arg unexpectedly null."));
                return;
              }
              const auto& msg_arg = std::any_cast<const LoopingMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output = api->SetLooping(msg_arg);
              if (output.has_value()) {
                reply(WrapError(output.value()));
                return;
              }
              flutter::EncodableList wrapped;
              wrapped.push_back(flutter::EncodableValue());
              reply(flutter::EncodableValue(std::move(wrapped)));
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<flutter::BasicMessageChannel<>>(
        binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.setVolume",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                reply(WrapError("msg_arg unexpectedly null."));
                return;
              }
              const auto& msg_arg = std::any_cast<const VolumeMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output = api->SetVolume(msg_arg);
              if (output.has_value()) {
                reply(WrapError(output.value()));
                return;
              }
              flutter::EncodableList wrapped;
              wrapped.push_back(flutter::EncodableValue());
              reply(flutter::EncodableValue(std::move(wrapped)));
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<flutter::BasicMessageChannel<>>(
        binary_messenger,
        "dev.flutter.pigeon.TizenVideoPlayerApi.setPlaybackSpeed", &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                reply(WrapError("msg_arg unexpectedly null."));
                return;
              }
              const auto& msg_arg = std::any_cast<const PlaybackSpeedMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output =
                  api->SetPlaybackSpeed(msg_arg);
              if (output.has_value()) {
                reply(WrapError(output.value()));
                return;
              }
              flutter::EncodableList wrapped;
              wrapped.push_back(flutter::EncodableValue());
              reply(flutter::EncodableValue(std::move(wrapped)));
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
              EncodableList wrapped;
              wrapped.push_back(EncodableValue());
              reply(EncodableValue(std::move(wrapped)));
              //reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<flutter::BasicMessageChannel<>>(
        binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.play",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                reply(WrapError("msg_arg unexpectedly null."));
                return;
              }
              const auto& msg_arg = std::any_cast<const TextureMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output = api->Play(msg_arg);
              if (output.has_value()) {
                reply(WrapError(output.value()));
                return;
              }
              flutter::EncodableList wrapped;
              wrapped.push_back(flutter::EncodableValue());
              reply(flutter::EncodableValue(std::move(wrapped)));
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<flutter::BasicMessageChannel<>>(
        binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.position",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                reply(WrapError("msg_arg unexpectedly null."));
                return;
              }
              const auto& msg_arg = std::any_cast<const TextureMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              ErrorOr<PositionMessage> output = api->Position(msg_arg);
              if (output.has_error()) {
                reply(WrapError(output.error()));
                return;
              }
              flutter::EncodableList wrapped;
              wrapped.push_back(
                  flutter::CustomEncodableValue(std::move(output).TakeValue()));
              reply(flutter::EncodableValue(std::move(wrapped)));
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<flutter::BasicMessageChannel<>>(
        binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.seekTo",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                reply(WrapError("msg_arg unexpectedly null."));
                return;
              }
              const auto& msg_arg = std::any_cast<const PositionMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              api->SeekTo(msg_arg,
                          [reply](std::optional<FlutterError>&& output) {
                            if (output.has_value()) {
                              reply(WrapError(output.value()));
                              return;
                            }
                            flutter::EncodableList wrapped;
                            wrapped.push_back(flutter::EncodableValue());
                            reply(flutter::EncodableValue(std::move(wrapped)));
                          });
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<flutter::BasicMessageChannel<>>(
        binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.pause",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                reply(WrapError("msg_arg unexpectedly null."));
                return;
              }
              const auto& msg_arg = std::any_cast<const TextureMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output = api->Pause(msg_arg);
              if (output.has_value()) {
                reply(WrapError(output.value()));
                return;
              }
              flutter::EncodableList wrapped;
              wrapped.push_back(flutter::EncodableValue());
              reply(flutter::EncodableValue(std::move(wrapped)));
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<flutter::BasicMessageChannel<>>(
        binary_messenger,
        "dev.flutter.pigeon.TizenVideoPlayerApi.setMixWithOthers", &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                reply(WrapError("msg_arg unexpectedly null."));
                return;
              }
              const auto& msg_arg = std::any_cast<const MixWithOthersMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output =
                  api->SetMixWithOthers(msg_arg);
              if (output.has_value()) {
                reply(WrapError(output.value()));
                return;
              }
              flutter::EncodableList wrapped;
              wrapped.push_back(flutter::EncodableValue());
              reply(flutter::EncodableValue(std::move(wrapped)));
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
}

flutter::EncodableValue TizenVideoPlayerApi::WrapError(
    std::string_view error_message) {
  return flutter::EncodableValue(flutter::EncodableList{
      flutter::EncodableValue(std::string(error_message)),
      flutter::EncodableValue("Error"), flutter::EncodableValue()});
}
flutter::EncodableValue TizenVideoPlayerApi::WrapError(
    const FlutterError& error) {
  return flutter::EncodableValue(flutter::EncodableList{
      flutter::EncodableValue(error.message()),
      flutter::EncodableValue(error.code()), error.details()});
}
