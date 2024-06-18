// Define a struct to store a single gamma ray reading
typedef struct {
    double depth;
    double gamma_ray;
} GammaRayReading;

// times are in seconds
// depths are in metres.


// Define a struct to store a single ultrasonic amplitude reading
typedef struct {
    double depth;        // Depth or time
    double amplitude;    // Ultrasonic amplitude value
} UltrasonicAmplitudeReading;


// Define a struct to store a single RGB color value
typedef struct {
    unsigned char red;   // 8 bits for red
    unsigned char green; // 8 bits for green
    unsigned char blue;  // 8 bits for blue
} RGBColor;

// Define a struct to store an entire image
typedef struct {
    size_t width;        // Width of the image
    size_t height;       // Height of the image
    RGBColor **pixels;   // 2D array of RGBColor structs
} RGBImage;

// Define a struct to store a single acoustic waveform reading
typedef struct {
    double time_or_depth; // Time or depth
    double *amplitudes;   // Array of amplitude values
    size_t num_samples;   // Number of amplitude samples
} AcousticWaveformReading;

// Define a struct to store an entire set of waveform readings
typedef struct {
    AcousticWaveformReading *readings; // Array of waveform readings
    size_t num_readings;               // Number of readings
} AcousticWaveformData;