# N64FlashcartMenu
**This repo and its documentation is currently experimental and subject to change without notice.**

## Aims
* Support as many flashcarts as possible
* Be open source using preferably MIT licensed third party licenced libraries where possible.
* Be testable, where possible using CTest, but if not, in an emulated environment.
* Encourage active development from community members and flashcart owners.

## Basic usage

### SC64
Download the `sc64menu.n64` ROM from the latest action run assets.
Add it to the root folder on your SD card.

Create a file called `config.sc64.toml.txt`
Add the following content, replacing the comments.
```
[last_rom]
    rom_path = "<!-- path to your ROM from the root of your SD card, note the quotes -->"
    save_path = "<!-- path to a save file from the root of your SD card, note the quotes -->"
    save_type = <!-- a number representing the save type (see save types) -->
    auto_load = <!-- a boolean value of `true` or `false` -->
```
Save it to the root folder on your SD card.

#### Save types
`0` = NONE
`1` = EEPROM_4K
`2` = EEPROM_16K
`3` = SRAM
`4` = SRAM_BANKED
`5` = SRAM_128K
`6` = FLASHRAM


### ED64
Not Currently not suppported, but there is an aim to do so.
This will likely replace AltraOSv1


# Developer documentation
**Work in progress!**

