Target = Struct_Lesson
export cpp = g++

Cpp_SRC = $(shell find ./ -name '*cpp')

.PHONY: all clean

all:
	$(cpp) $(Cpp_SRC) -o $(Target)

clean:
	rm -f $(shell find ./ -name $(Target))

