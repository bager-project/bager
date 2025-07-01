# bager
Main repository containing Raspberry Pi Pico code.

Input files containing polygons and all the required information to do a job are passed to the Raspberry Pi Pico
which controls the B.A.G.E.R. based on real time data.

# B.A.G.E.R.
B.A.G.E.R. (Basic Autonomous Ground Excavation Robot) is an autonomous excavator robot featuring a full project documentation parser.
Parser is written in Python, while B.A.G.E.R.'s movement is controlled using Raspberry Pi Pico programmed with C and C++.
We are keen to keep human operators to oversee computer's work.

## Compile instructions
- Install [Pico SDK](https://github.com/raspberrypi/pico-sdk) by cloning it.
- If needed copy `pico_sdk_import.cmake` from `external` folder into project's root directory.
- If needed export path Pico SDK (`export PICO_SDK_PATH=/path_to_sdk/`).
- Make `build` directory and enter it.
- Run `cmake ..` and then `make` in order to get `bager.uf2` file which is binary and can be copied to the Raspberry Pi Pico.
