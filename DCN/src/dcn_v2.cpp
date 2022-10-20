#include "cpu/modulated_deform_conv_cpu.h"

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
  m.def("modulated_deform_conv_forward", &modulated_deform_conv_forward, "modulated_deform_conv_forward");
  m.def("modulated_deform_conv_backward", &modulated_deform_conv_backward, "modulated_deform_conv_backward");
//  m.def("dcn_v2_psroi_pooling_forward", &dcn_v2_psroi_pooling_cpu_forward, "dcn_v2_psroi_pooling_forward");
//  m.def("dcn_v2_psroi_pooling_backward", &dcn_v2_psroi_pooling_cpu_backward, "dcn_v2_psroi_pooling_backward");
}
