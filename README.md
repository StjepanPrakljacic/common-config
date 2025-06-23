# Common config
This repository provides a shared collection of common configuration types, macros, and definitions in C. It is designed to be reused across multiple projects to maintain consistency and avoid duplication of standard data types, return codes, and error enums.

# Features

- Standardized return type (`Std_ReturnType`) with common values (`E_OK`, `E_NOT_OK`).
- Generic error enumeration for common error cases.
- Common boolean definitions.
- Utility macros for basic operations like `MIN`, `MAX`, and array size calculation.
- Easy to include shared config for any C project.

# Usage

To use the common config headers in your C project, clone this repository:

```bash
git clone https://github.com/StjepanPrakljacic/common-config.git
```

Make sure to add the inc directory to your compiler’s include path and include headers 

# Add as a Git Submodule to your project

Add this repository as a submodule in your project to keep it synced and version-controlled together:
```bash
git submodule add https://github.com/StjepanPrakljacic/common-config.git external/common-config
```
```bash
git submodule update --init --recursive
```

# Contributing
Contributions to the project are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request on the GitHub repository.

# License
This project is licensed under the [MIT License](LICENSE).
