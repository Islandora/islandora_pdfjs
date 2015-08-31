# Islandora PDF.js [![Build Status](https://travis-ci.org/Islandora/islandora_pdfjs.png?branch=7.x)](https://travis-ci.org/islandora/islandora_pdfjs)

## Introduction

An Islandora viewer module using [Mozilla PDF.js](http://mozilla.github.io/pdf.js/).

## Requirements

* [Islandora](https://github.com/islandora/islandora)
* [Tuque](https://github.com/islandora/tuque)
* [PDF.js](http://mozilla.github.io/pdf.js/)

## Installation

Install as usual, see [this](https://drupal.org/documentation/install/modules-themes/modules-7) for further information.

[Download](http://mozilla.github.io/pdf.js/getting_started/#download) and install [PDF.js](http://mozilla.github.io/pdf.js) to your sites/libraries/pdfjs folder, or run `drush pdfjs-plugin`. 

Note: If you use the Drush command, it is advisable to Move (not copy) the install script to your `.drush` folder and run it.

## Configuration

Currently the PDF.js viewer can be used as the viewer for:

* the PDF Solution Pack 
   * Administration » Islandora » Solution pack configuration » PDF Solution Pack (admin/islandora/solution_pack_config/pdf).
* the Book Solution Pack (both the book and the page object are options)
   * Administration  » Islandora » Solution pack configuration » Book Solution Pack (admin/islandora/solution_pack_config/book). 

## Documentation

Further documentation for this module is available at [our wiki](https://wiki.duraspace.org/display/ISLANDORA/Islandora+PDF.js).

## Troubleshooting/Issues

Having problems or solved a problem? Check out the Islandora google groups for a solution.

* [Islandora Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora)
* [Islandora Dev Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora-dev)

## Maintainers/Sponsors

Current maintainers:

* [Nelson Hart](https://github.com/nhart)

## Development

If you would like to contribute to this module, please check out [CONTRIBUTING.md](CONTRIBUTING.md). In addition, we have helpful [Documentation for Developers](https://github.com/Islandora/islandora/wiki#wiki-documentation-for-developers) info, as well as our [Developers](http://islandora.ca/developers) section on the [Islandora.ca](http://islandora.ca) site.

## License

[GPLv3](http://www.gnu.org/licenses/gpl-3.0.txt)


**Note** This module requires PDF.js. PDF.js is licensed under an [Apache2 License](https://github.com/mozilla/pdf.js/blob/master/LICENSE)
