#!/bin/sh
make bonus -s && gcc ./tests/main.c libft.a && make -s fclean && ./a.out && rm a.out