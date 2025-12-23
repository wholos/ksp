all:
	@mv ksp.h /etc/
	@gcc -o ksp ksp.c

clean:
	@rm ksp

install: all
	@mkdir -p /etc/ksp/ && mv ksp.c /etc/ksp/ && mv ksp /usr/bin/
