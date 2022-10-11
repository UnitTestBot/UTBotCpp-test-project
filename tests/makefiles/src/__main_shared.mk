# This file is automatically generated by UnitTestBot. For further information see https://www.utbot.org

$(shell mkdir -p $(BUILD_DIR) >/dev/null)
$(shell mkdir -p $(BUILD_DIR)/dependencies >/dev/null)
.FORCE : 
	
# { gtest
$(BUILD_DIR)/googletest/gtest-all.cc.o : $(GTEST)/googletest/src/gtest-all.cc
	mkdir -p $(BUILD_DIR)/googletest && $(CLANGXX) -I$(GTEST)/googletest/include -I$(GTEST)/googletest -o $(BUILD_DIR)/googletest/gtest-all.cc.o  -c -std=c++11 -fPIC $(GTEST)/googletest/src/gtest-all.cc
export GTEST_ALL = $(BUILD_DIR)/googletest/gtest-all.cc.o
$(BUILD_DIR)/googletest/gtest_main.cc.o : $(GTEST)/googletest/src/gtest_main.cc
	mkdir -p $(BUILD_DIR)/googletest && $(CLANGXX) -I$(GTEST)/googletest/include -I$(GTEST)/googletest -o $(BUILD_DIR)/googletest/gtest_main.cc.o  -c -std=c++11 -fPIC $(GTEST)/googletest/src/gtest_main.cc
export GTEST_MAIN = $(BUILD_DIR)/googletest/gtest_main.cc.o
# } gtest
$(BUILD_DIR)/recompiled/CMakeFiles/c-example-mini.dir/src/main.c.o : $(PROJECT_DIR)/tests/wrapper/src/main_wrapper.c $(BUILD_DIR)/dependencies/tests/wrapper/src/main_wrapper.c.d
	mkdir -p $(BUILD_DIR)/dependencies/tests/wrapper/src
	mkdir -p $(BUILD_DIR)/recompiled/CMakeFiles/c-example-mini.dir/src && C_INCLUDE_PATH=$UTBOT_LAUNCH_INCLUDE_PATH $(CLANG) -iquote$(PROJECT_DIR)/src -MT $@ -MMD -MP -MF $(BUILD_DIR)/dependencies/tests/wrapper/src/main_wrapper.c.Td -fsanitize=alignment,builtin,bounds,enum,float-cast-overflow,float-divide-by-zero,implicit-unsigned-integer-truncation,implicit-signed-integer-truncation,implicit-integer-sign-change,integer-divide-by-zero,nonnull-attribute,null,nullability-arg,nullability-assign,nullability-return,pointer-overflow,return,returns-nonnull-attribute,shift,unreachable,vla-bound -fsanitize=address -fno-sanitize-recover=all -fprofile-instr-generate -fcoverage-mapping -g -fno-omit-frame-pointer -fno-optimize-sibling-calls -fPIC -O0 -c -std=gnu11 -o $(BUILD_DIR)/recompiled/CMakeFiles/c-example-mini.dir/src/main.c.o $(PROJECT_DIR)/tests/wrapper/src/main_wrapper.c
	mv -f $(BUILD_DIR)/dependencies/tests/wrapper/src/main_wrapper.c.Td $(BUILD_DIR)/dependencies/tests/wrapper/src/main_wrapper.c.d
$(BUILD_DIR)/recompiled/lib/CMakeFiles/lib.dir/libfunc.c.o : $(PROJECT_DIR)/tests/wrapper/lib/libfunc_wrapper.c $(BUILD_DIR)/dependencies/tests/wrapper/lib/libfunc_wrapper.c.d
	mkdir -p $(BUILD_DIR)/dependencies/tests/wrapper/lib
	mkdir -p $(BUILD_DIR)/recompiled/lib/CMakeFiles/lib.dir && C_INCLUDE_PATH=$UTBOT_LAUNCH_INCLUDE_PATH $(CLANG) -iquote$(PROJECT_DIR)/lib -MT $@ -MMD -MP -MF $(BUILD_DIR)/dependencies/tests/wrapper/lib/libfunc_wrapper.c.Td -fsanitize=alignment,builtin,bounds,enum,float-cast-overflow,float-divide-by-zero,implicit-unsigned-integer-truncation,implicit-signed-integer-truncation,implicit-integer-sign-change,integer-divide-by-zero,nonnull-attribute,null,nullability-arg,nullability-assign,nullability-return,pointer-overflow,return,returns-nonnull-attribute,shift,unreachable,vla-bound -fsanitize=address -fno-sanitize-recover=all -fprofile-instr-generate -fcoverage-mapping -g -fno-omit-frame-pointer -fno-optimize-sibling-calls -fPIC -O0 -c -std=gnu11 -o $(BUILD_DIR)/recompiled/lib/CMakeFiles/lib.dir/libfunc.c.o $(PROJECT_DIR)/tests/wrapper/lib/libfunc_wrapper.c
	mv -f $(BUILD_DIR)/dependencies/tests/wrapper/lib/libfunc_wrapper.c.Td $(BUILD_DIR)/dependencies/tests/wrapper/lib/libfunc_wrapper.c.d
$(BUILD_DIR)/recompiled/lib/liblib.a : $(BUILD_DIR)/recompiled/lib/CMakeFiles/lib.dir/libfunc.c.o
	rm -f $(BUILD_DIR)/recompiled/lib/liblib.a
	mkdir -p $(BUILD_DIR)/recompiled/lib && $(AR) qc -o $(BUILD_DIR)/recompiled/lib/liblib.a $(BUILD_DIR)/recompiled/lib/CMakeFiles/lib.dir/libfunc.c.o
$(BUILD_DIR)/recompiled/libc-example-mini.so : $(BUILD_DIR)/recompiled/lib/liblib.a $(BUILD_DIR)/recompiled/CMakeFiles/c-example-mini.dir/src/main.c.o
	rm -f $(BUILD_DIR)/recompiled/libc-example-mini.so
	mkdir -p $(BUILD_DIR)/recompiled && $(CLANG) -shared $(LDFLAGS) -O0 -Wl,--allow-multiple-definition -fprofile-instr-generate -fsanitize=alignment,builtin,bounds,enum,float-cast-overflow,float-divide-by-zero,implicit-unsigned-integer-truncation,implicit-signed-integer-truncation,implicit-integer-sign-change,integer-divide-by-zero,nonnull-attribute,null,nullability-arg,nullability-assign,nullability-return,pointer-overflow,return,returns-nonnull-attribute,shift,unreachable,vla-bound -fsanitize=address -Wl,--whole-archive -fuse-ld=gold -o $(BUILD_DIR)/recompiled/libc-example-mini.so $(BUILD_DIR)/recompiled/CMakeFiles/c-example-mini.dir/src/main.c.o $(BUILD_DIR)/recompiled/lib/liblib.a -Wl,--no-whole-archive
$(BUILD_DIR)/test_objects/src/main_dot_c_test.cpp.o : $(PROJECT_DIR)/tests/src/main_dot_c_test.cpp
	mkdir -p $(BUILD_DIR)/test_objects/src && $(CLANGXX) -g -fno-omit-frame-pointer -fno-optimize-sibling-calls -fPIC -I$(GTEST)/googletest/include -O0 -c -o $(BUILD_DIR)/test_objects/src/main_dot_c_test.cpp.o $(PROJECT_DIR)/tests/src/main_dot_c_test.cpp
$(BUILD_DIR)/recompiled/src/main : $(GTEST_MAIN) $(GTEST_ALL) $(BUILD_DIR)/test_objects/src/main_dot_c_test.cpp.o $(BUILD_DIR)/recompiled/libc-example-mini.so $(BUILD_DIR)/recompiled/lib/liblib.a
	mkdir -p $(BUILD_DIR)/recompiled/src && $(CLANGXX) $(LDFLAGS) -L$(BUILD_DIR)/recompiled $(GTEST_MAIN) $(GTEST_ALL) $(BUILD_DIR)/test_objects/src/main_dot_c_test.cpp.o $(BUILD_DIR)/recompiled/libc-example-mini.so $(BUILD_DIR)/recompiled/lib/liblib.a  -lpthread -fprofile-instr-generate -fsanitize=alignment,builtin,bounds,enum,float-cast-overflow,float-divide-by-zero,implicit-unsigned-integer-truncation,implicit-signed-integer-truncation,implicit-integer-sign-change,integer-divide-by-zero,nonnull-attribute,null,nullability-arg,nullability-assign,nullability-return,pointer-overflow,return,returns-nonnull-attribute,shift,unreachable,vla-bound -fsanitize=address -O0 -fuse-ld=gold -o $(BUILD_DIR)/recompiled/src/main
bin : .FORCE
	echo $(BUILD_DIR)/recompiled/libc-example-mini.so
build : $(BUILD_DIR)/recompiled/src/main
	
run : build
	cd "$(BUILD_DIR)" && PATH=$$PATH:$(pwd) UBSAN_OPTIONS=print_stacktrace=1,report_error_type=1 ASAN_OPTIONS=debug=1,detect_odr_violation=1,detect_stack_use_after_return=1,detect_leaks=0 $(BUILD_DIR)/recompiled/src/main $(GTEST_FLAGS)
clean : 
	rm -rf $(BUILD_DIR) $(BUILD_DIR)/dependencies $(BUILD_DIR)/googletest/gtest-all.cc.o $(BUILD_DIR)/googletest/gtest_main.cc.o $(BUILD_DIR)/recompiled/CMakeFiles/c-example-mini.dir/src/main.c.o $(BUILD_DIR)/recompiled/lib/CMakeFiles/lib.dir/libfunc.c.o $(BUILD_DIR)/recompiled/lib/liblib.a $(BUILD_DIR)/recompiled/libc-example-mini.so $(BUILD_DIR)/test_objects/src/main_dot_c_test.cpp.o $(BUILD_DIR)/recompiled/src/main
.PRECIOUS: $(BUILD_DIR)/dependencies/%.d
$(BUILD_DIR)/dependencies/%.d: ;

-include $(BUILD_DIR)/dependencies/*.Td $(BUILD_DIR)/dependencies/*.d

