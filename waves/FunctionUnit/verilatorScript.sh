 set -e ; verilator -CFLAGS -fPIC -CFLAGS -m64 -CFLAGS -shared -CFLAGS -Wno-attributes -LDFLAGS -fPIC -LDFLAGS -m64 -LDFLAGS -shared -LDFLAGS -Wno-attributes -CFLAGS -I"/usr/local/java/jdk1.8.0_321/include" -CFLAGS -I"/usr/local/java/jdk1.8.0_321/include/linux" -CFLAGS -fvisibility=hidden -LDFLAGS -fvisibility=hidden -CFLAGS -std=c++11 -LDFLAGS -std=c++11 --autoflush   --output-split 5000 --output-split-cfuncs 500 --output-split-ctrace 500 -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-UNSIGNED --x-assign unique --x-initial-edge --trace-depth 0 -O3 -CFLAGS -O0 -CFLAGS -DTRACE --trace  --Mdir verilator --top-module FunctionUnit  -cc "/home/zqc/桌面/etn5_internship/SpinalWorkshop/tmp/job_12/FunctionUnit.v" --exe verilator/VFunctionUnit__spinalWrapper.cpp 