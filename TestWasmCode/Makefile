TARGET_EXEC ?= test.wasm

BUILD_DIR ?= .

CXX := "C:/Program Files/LLVM/bin/clang.exe"

SRCS := $(wildcard *.cpp ../api/Custom/*.cpp)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

INC_DIRS := 
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CPPFLAGS ?= $(INC_FLAGS) -MMD -MP

CPPFLAGS += --target=wasm32-wasi
CPPFLAGS += -O0
CPPFLAGS += -z
CPPFLAGS += stack-size=4096
CPPFLAGS += -Wl,--initial-memory=65536
CPPFLAGS += --sysroot=C:\\wasi-sdk-11.0\\wasi-sysroot\\include
CPPFLAGS += -std=c++11
# CPPFLAGS += "--sysroot=C:\\Users\\Michael\\Documents\\_Active\\godot-wasm\\godot\\modules\\WasGo\\thirdparty\\wasm-micro-runtime\\wamr-sdk\\app\\libc-builtin-sysroot
# CPPFLAGS += "-Wl,--allow-undefined-file=C:\\Users\\Michael\\Documents\\_Active\\godot-wasm\\godot\\modules\\WasGo\\thirdparty\\wasm-micro-runtime\\wamr-sdk\\app\\libc-builtin-sysroot\\share\\defined-symbols.txt
CPPFLAGS += -Wl,--strip-all
CPPFLAGS += -Wl,--no-entry
CPPFLAGS += -nostdlib
# CPPFLAGS += -Wl,--export-all
CPPFLAGS += -Wl,--export=_notification
CPPFLAGS += -Wl,--allow-undefined
CPPFLAGS += --include-directory=C:\\Users\\Michael\\Documents\\_Active\\godot-wasm\\godot\\modules\\WasGo\\wasgo_headers
CPPFLAGS += --include-directory=C:\\Users\\Michael\\Documents\\_Active\\godot-wasm\\godot\\modules\\WasGo\\api\\Custom
CPPFLAGS += --include-directory=C:\\wasi-sdk-11.0\\wasi-sysroot\\include
CPPFLAGS += --include-directory=C:\\wasi-sdk-11.0\\wasi-sysroot\\include\\c++\\v1
# CPPFLAGS += -oC:\\Users\\Michael\\Documents\\_Active\\V-Sekai\\groups\\test.wasm
CPPFLAGS += -v

$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(CPPFLAGS)

# # assembly
# $(BUILD_DIR)/%.s.o: %.s
# 	$(MKDIR_P) $(dir $@)
# 	$(AS) $(ASFLAGS) -c $< -o $@

# c source
# $(BUILD_DIR)/%.c.o: %.c
# 	$(MKDIR_P) $(dir $@)
# 	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

# c++ source
$(BUILD_DIR)/%.cpp.o: %.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(OBJS): Makefile

.PHONY: clean

# clean:
# 	$(RM) -r $(BUILD_DIR)

-include $(DEPS)

# MKDIR_P ?= mkdir -p

# $(info $(SRCS) )