
DED_FLAGS=-Wall -Wextra -Weffc++ -Wcast-align -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wformat-security -Wformat=2 -Wignored-qualifiers -Winit-self -Winline -Wlogical-op -Wmain -Wmissing-declarations -Wno-missing-field-initializers -Wmissing-include-dirs -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wredundant-decls -Wshadow -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wswitch-default -Wswitch-enum -Wtype-limits -Wundef -Wunreachable-code -Wwrite-strings -fexceptions -g -pipe -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC

all: onegin

onegin: input.o my_strcmp.o str_swap.o text_split.o str_sort.o output.o main.o
	g++ $(DED_FLAGS) main.o input.o my_strcmp.o str_swap.o text_split.o str_sort.o output.o -o onegin

main.o: main.cpp
		g++ $(DED_FLAGS) -c main.cpp -o main.o

text_split.o: text_split.cpp
		g++ $(DED_FLAGS) -c text_split.cpp -o text_split.o

input.o: input.cpp
		g++ $(DED_FLAGS) -c input.cpp -o input.o

my_strcmp.o: my_strcmp.cpp
		g++ $(DED_FLAGS) -c my_strcmp.cpp -o my_strcmp.o

str_swap.o: str_swap.cpp
		g++ $(DED_FLAGS) -c str_swap.cpp -o str_swap.o

str_sort.o: str_sort.cpp
		g++ $(DED_FLAGS) -c str_sort.cpp -o str_sort.o

output.o: output.cpp
		g++ $(DED_FLAGS) -c output.cpp -o output.o

clean:
	rm -rf *.o onegin
