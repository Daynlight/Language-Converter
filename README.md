# Language Converter
## About
This component is for transforming HLSL, C# to other platform specific versions and optimize them.




## TOC
- [About](#about)
- [TOC](#toc)
- [How it works and core idea](#how-it-works-and-core-idea)
- [Installation](#installation)
- [Usage](#usage)
- [Diagram](#diagram)
- [Components and responsibilities](#components-and-responsibilities)
  - [Package Builder](#package-builder)
  - [Config Loader](#config-loader)
  - [Backup System](#backup-system)
  - [LOGS](#logs)
  - [Module Loader](#module-loader)
  - [Parser (Core)](#parser-core)
  - [Data I/O (Core)](#data-io-core)
  - [Linker](#linker)
  - [File Version Control](#file-version-control)
  - [Dependencies Controller](#dependencies-controller)
  - [Build Thread Controller](#build-thread-controller)
  - [Builder (Core)](#builder-core)
  - [File Reader](#file-reader)
  - [IR Optimizer (Core)](#ir-optimizer-core)
  - [IR Creator (Core)](#ir-creator-core)
  - [Platform Builder (Core)](#platform-builder-core)
  - [Platform Tests](#platform-tests)
  - [Build Result](#build-result)
  - [Module Error Handler](#module-error-handler)
- [Folder Structure](#folder-structure)
- [Config File](#config-file)
- [IR Explained](#ir-explained)
- [Modules vs Headers](#modules-vs-headers)
- [Evolution](#evolution)
- [Long Term](#long-term)
- [Libraries](#libraries)
- [TODO](#todo)




## How it works and core idea
We want making multiple versions with least amount of work. Strategy is we write shader only for specific version than use converter to make it working on other platforms. Core idea is read file make IR(Unified Version) probably optimize ir and then build platform from ir. That require builder that is higher version then debuilder. Builder and Debuilder are creating or using IRs with specific version. IR is graph of calls and others. We also need Dependency Graph but only for optimization. Why we need it for example file A includes file B. We update File B and we don't know about file A so we create Dependency Graph to track it. We use config file to specify builder and debuilder with versions and specific methods for example ```math.ddl```, IR version we use and files to convert. We can specify multiple configurations in one config file. We will use ddl modules that will be loaded at start what we loaded is specified in config file. In config we also specify output default one is ```Builded/```




## Installation
1. Clone
```bash
git clone --recurse-submodules https://github.com/LamaInPijamas/pixelated_shader.git
```
2. Update Submodules if ran without ```--recurse-submodules```
```bash
git submodule init
git submodule update
```
3. Build with cmake
```bash
mkdir build/
cd build/
cmake ..
```
4. Run
```bash
./PackageBuilder/PackageBuilder <path to config>
```
```bash
./PackageBuilder/PackageBuilder.exe <path to config>
```




## Usage
1. Add your files in example is used ```Scripts/```
2. Update ```config``` file
3. Run program
4. Files should be in specified directory or ```Builded/``` if not specified




## Diagram
[Diagram](docs/PackageBuilder/Platform.Arch.drawio.png)
![Diagram](docs/PackageBuilder/Platform.Arch.drawio.svg)




## Components and responsibilities
### Package Builder
#### Responsibility
#### Functions
#### Error Handling

### Config Loader
#### Responsibility
#### Functions
#### Error Handling

### Backup System
#### Responsibility
#### Functions
#### Error Handling

### LOGS
#### Responsibility
#### Functions
#### Error Handling

### Module Loader
#### Responsibility
#### Functions
#### Error Handling

### Parser (Core)
#### Responsibility
#### Functions
#### Error Handling

### Data I/O (Core)
#### Responsibility
#### Functions
#### Error Handling

### Linker
#### Responsibility
#### Functions
#### Error Handling

### File Version Control
#### Responsibility
#### Functions
#### Error Handling

### Dependencies Controller
#### Responsibility
#### Functions
#### Error Handling

### Build Thread Controller
#### Responsibility
#### Functions
#### Error Handling

### Builder (Core)
#### Responsibility
#### Functions
#### Error Handling

### File Reader
#### Responsibility
#### Functions
#### Error Handling

### IR Optimizer (Core)
#### Responsibility
#### Functions
#### Error Handling

### IR Creator (Core)
#### Responsibility
#### Functions
#### Error Handling

### Platform Builder (Core)
#### Responsibility
#### Functions
#### Error Handling

### Platform Tests
#### Responsibility
#### Functions
#### Error Handling

### Build Result
#### Responsibility
#### Functions
#### Error Handling

### Module Error Handler 
#### Responsibility
#### Functions
#### Error Handling




## Folder Structure




## Config File




## IR Explained




## Modules vs Headers
Modules(dlls) allows us to fast loading but we need interfaces.
Interfaces makes it a bit harder to implement because we can't define
new methods in module and use it when we load them we need to provide
some way to get them and then use it. Also community will need to write
only ddl and add it to specific folder.
Headers don't allows us to fast loading we will need to recompile it
but it is much easier to implement. Stops community.

**My idea now we use headers but with plans of modules in feature**




## Evolution
- Moving to modules from headers
- Adding new IRs
- Adding more languages




## Long Term
In feature we can add more platforms just adding ddls also we can evolve it
to new versions by creating new versions of IRs. Maybe one day IR that will be standard for languages. Because we are using dlls we allow easy evolvement by community. We can add Optimizations like threads, data batching and version control for making it faster especially in multi building.




## Libraries
- [fmt](https://github.com/fmtlib/fmt.git) 




## TODO
Full Docs
- [ ] Desc Responsibilities
- [ ] Full Deep Explanation
- [ ] Optimus Prime
- [ ] Folder Struct
- [ ] Config Format
- [ ] Interfaces
- [ ] IR
- [ ] Long Term Prediction