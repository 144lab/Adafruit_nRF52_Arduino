NAME=144lab-nrf52-0.14.6

build:
	docker build --no-cache --build-arg NAME=$(NAME) --rm -t $(NAME) .
	-docker rm $(NAME)
	docker create --name $(NAME) $(NAME)
	docker cp $(NAME):/$(NAME).tar.bz2 $(NAME).tar.bz2
	-docker rm $(NAME)
	shasum -a 256 $(NAME).tar.bz2
	ls -l $(NAME).tar.bz2
