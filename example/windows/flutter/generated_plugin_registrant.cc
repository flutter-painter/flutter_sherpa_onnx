//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <flutter_ffi_asset_helper/flutter_ffi_asset_helper_plugin_c_api.h>
#include <flutter_onnx/flutter_onnx_plugin_c_api.h>
#include <flutter_sherpa_onnx/flutter_sherpa_onnx_plugin_c_api.h>
#include <permission_handler_windows/permission_handler_windows_plugin.h>
#include <record_windows/record_windows_plugin_c_api.h>

void RegisterPlugins(flutter::PluginRegistry* registry) {
  FlutterFfiAssetHelperPluginCApiRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("FlutterFfiAssetHelperPluginCApi"));
  FlutterOnnxPluginCApiRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("FlutterOnnxPluginCApi"));
  FlutterSherpaOnnxPluginCApiRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("FlutterSherpaOnnxPluginCApi"));
  PermissionHandlerWindowsPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("PermissionHandlerWindowsPlugin"));
  RecordWindowsPluginCApiRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("RecordWindowsPluginCApi"));
}
