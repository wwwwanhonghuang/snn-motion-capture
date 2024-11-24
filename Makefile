CXX := clang++
CXX_FLAGS = -O0

SNN_MOTION_MAIN_TARGET := snn-motion-main
SNN_MOTION_MAIN_TARGET_SRC = snn-motion-main.cpp

# Target to compile the main program
$(SNN_MOTION_MAIN_TARGET): $(SNN_MOTION_MAIN_TARGET_SRC)
	$(CXX) $(CXX_FLAGS) $(SNN_MOTION_MAIN_TARGET_SRC) -o $(SNN_MOTION_MAIN_TARGET)
