//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <flutter_ffi_asset_helper/flutter_ffi_asset_helper_plugin.h>
#include <flutter_onnx/flutter_onnx_plugin.h>
#include <flutter_sherpa_onnx/flutter_sherpa_onnx_plugin.h>
#include <record_linux/record_linux_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) flutter_ffi_asset_helper_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlutterFfiAssetHelperPlugin");
  flutter_ffi_asset_helper_plugin_register_with_registrar(flutter_ffi_asset_helper_registrar);
  g_autoptr(FlPluginRegistrar) flutter_onnx_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlutterOnnxPlugin");
  flutter_onnx_plugin_register_with_registrar(flutter_onnx_registrar);
  g_autoptr(FlPluginRegistrar) flutter_sherpa_onnx_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlutterSherpaOnnxPlugin");
  flutter_sherpa_onnx_plugin_register_with_registrar(flutter_sherpa_onnx_registrar);
  g_autoptr(FlPluginRegistrar) record_linux_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "RecordLinuxPlugin");
  record_linux_plugin_register_with_registrar(record_linux_registrar);
}
