dstDir = Output

dstClOpt = -Fe:${dstDir}/output.exe -Fd:${dstDir}/output.pdb
clOpt = -std:c++17 -Zi -Ehsc

build_dbg: main.cpp
	cl ${dstClOpt} ${clOpt} main.cpp

run:  ${dstDir}/output.exe
	${dstDir}/output.exe