# termin-snake

## What is it?

`termin-snake` is a clone of the `snake` game in the terminal. All terminal operations are performed using the `ncurses` library.

I'm doing this project because I'm learning `C` and don't know the `ncurses` library. So it's an educational project that I'm using to improve myself.

My way of doing C is a bit dated because I learned at school `42` and so I learned under the eye of the [norm](https://github.com/42School/norminette). In this project, I don't follow the norm to the letter. But my code style is largely inspired by it.

## Compatibility?

I'm developing this project in `WSL`. It should be compatible with all systems that have `ncurses`. If you're running `Ubuntu` and don't have `ncurses` installed, you can try the following command: `sudo apt-get install libncurses5-dev libncursesw5-dev`.

I intend to test the project on OsX in the future.

## How do I install it?

```text
> git clone git@github.com:Ray-cmd/termin-snake.git
> cd termin-snake
> make
> ./termin-snake
```

## TODO

- Add wall collisions.
- Add snake body collisions.
- Add food.
- Add score.
- Add colors.
- Add help menu.
- Add pause.
