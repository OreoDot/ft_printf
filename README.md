*This project has been created as part of the 42 curriculum by [Dotun Oreoluwa], [DT].*

# ft_printf

## 📌 Description
`ft_printf` is a custom implementation of the standard C `printf` function.  
The goal of this project is to recreate a simplified version of `printf` while respecting strict constraints from the 42 curriculum — specifically:  
- No use of the original `printf` buffer management.  
- Only the conversions `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, and `%` must be implemented.  
- The library must compile into `libftprintf.a`.  

This project strengthens your understanding of:  
- Variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)  
- Low-level output with `write()`  
- Custom parsing logic for format strings  
- Building static libraries with `ar`  

---

## ⚙️ Instructions

### **Compilation**
To build the library, simply run:

```bash
make