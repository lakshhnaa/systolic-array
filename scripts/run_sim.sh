#!/bin/bash
# Move to project root regardless of where script is called from
cd "$(dirname "$0")"/..

echo "==> Compiling with Verilator..."
verilator --binary --trace -j 0 \
    -Irtl \
    rtl/systolic_array.v tb/tb_systolic_array.v \
    --top-module tb_systolic_array \
    -Mdir sim/obj_dir

echo "==> Running simulation..."
./sim/obj_dir/Vtb_systolic_array

echo "==> Done. Waveform saved to sim/waveform.vcd"
echo "==> Run: gtkwave sim/waveform.vcd"
