# bager
Main repository containing AST decompiler and code getting executed on Raspberry Pi Pico.

# B.A.G.E.R.
B.A.G.E.R. (Basic Autonomous Ground Excavation Robot) is an autonomous excavator robot featuring full project documentation parser. We are keen to keep human operators to oversee computers work. We are using Raspberry Pi Pico with C & C++ combination.

## Compile instructions
- Install [Pico SDK](https://github.com/raspberrypi/pico-sdk) by cloning it.
- If needed copy `pico_sdk_import.cmake` from `external` folder into project's root directory.
- If needed export path Pico SDK (`export PICO_SDK_PATH=/path_to_sdk/`).
- Make `build` directory and enter it.
- Run `cmake ..` and then `make` in order to get `bager.uf2` file which is binary and can be copied to Raspberry Pi Pico.
