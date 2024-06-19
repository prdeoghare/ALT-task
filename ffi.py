# ffi.py
import ctypes

# Load the shared library
lib = ctypes.CDLL('./Log.so')

# Define the GammaRayReading structure in Python
class GammaRayReading(ctypes.Structure):
    _fields_ = [("depth", ctypes.c_double),
                ("gamma_ray", ctypes.c_double)]
                

lib.get_depth.argtypes = [ctypes.POINTER(GammaRayReading)]
lib.get_depth.restype = ctypes.c_double

lib.get_gamma_ray.argtypes = [ctypes.POINTER(GammaRayReading)]
lib.get_gamma_ray.restype = ctypes.c_double                