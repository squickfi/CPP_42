NAME		= fixed

SRCS		= Fixed.cpp\
				Point.cpp\
				bsp.cpp\
				main.cpp
OBJS		= $(SRCS:.cpp=.o)
DEP 		= $(OBJS:.o=.d)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -I. -MMD -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) $(DEP)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

include $(wildcard $(DEP))