# Debian only!! for other platforms consider using one of the batch scripts for Windows or compiling yourself

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    cd build && ./premake5 gmake && cd .. && make && bin/Debug/drone
else
    echo "this script is for linux-gnu, consider using batch scripts for Window or compiling yourself or any other platform"
fi