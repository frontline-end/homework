cc = clang
c_flags = -Wall -Wextra -g
src = cau3
target = out

all: $(target)

$(target): $(src)
	$(cc) $(c_flags) $(src).c -o $(target)

math:
	$(cc) $(c_flags) $(src).c -o $(target) -lm

run:
	./$(target)

clear:
	rm *~ $(target) $(src)
