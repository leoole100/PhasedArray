# Phased Array

This project is developing a Phased Array for the localisation of an ROV.\
It ultrasonic (40kHz) transducers like [here](https://www.aliexpress.com/item/32294219722.html?gatewayAdapt=glo2deu&spm=a2g0o.9042311.0.0.51394c4dT7BWEK).

# Simulation

Mathematica simulations can be found in the [sim](./sim/) directory.

The [2D](./sim/2D/) and [3D](./sim/3D/) directories contain full **FEM** (finite element method) simulations of the pressure field around the transducers.\
Phaseguides were examined to narrow the aperture of the transducers to put them closer together.\
The 3D code wasn't efficient enough to continue with full 3D simulations.

## Array geometry

In this section ([ArrayGeometries.nb](./sim/ArrayGeometries.nb), [results/](./sim/res/air/)) different Array geometries are tested in air (c = 343m/s) and a at frequency of 40kHz. The phaseshifts are selected to steer the main beam to 30° to the right.\
On the left the positions of the transducers are shown. These have a minimum spacing of 15 mm or 1.3 &lambda;. The main lobe and strongest side lobe are marked by a black dot. The "*Main Lobe*"-Measurement in dbi denotes the directivity while the "*Side Lobe*" in db denotes the difference between the main and side lobe levels.\
Here a rectangular 8x8 array is shown:
![directivity of rectangular Array](./sim/res/air/rect64.png)

The side lobes have the same level as the main lobe. This is inadequate.

Spiral array geometries are tested next. The spiral is given with r=&phi;<sup>E</sup> with the Exponent E. The points are selected with the golden angle &phi;=n * &pi;[ 3-sqrt(5)].\
Here is a 32 element Array with E=3/4:
![spiral Array](./sim/res/air/0.5Spiral32.png)

The results of a couple Tests:

| Name  | Elements |Main Lobe Directivity | Side Lobe Level |
| ------------- | ----| ------------- | ----|
| [rect 8x8](./sim/res/air/rect64.png)  | 64 | 18 dbi  | 0 dbi|
| [tri 8x8](./sim/res/air/tri17.png)  | 17 | 12 dbi  | 0 dbi|
| [spiral E=0.5](./sim/res/air/0.5Spiral32.png)  | 32 | 15 dbi  | -5 dbi|
| [spiral E=0.75](./sim/res/air/0.75Spiral32.png)  | 32 | 15 dbi  | -10 dbi|
| [spiral E=1](./sim/res/air/1.0Spiral32.png)  | 32 | 15 dbi  | -10 dbi|
| [spiral E=1.25](./sim/res/air/1.25Spiral32.png)  | 32 | 15 dbi  | -10 dbi|
| [spiral E=1](./sim/res/air/1.0Spiral08.png)  | 08 | 9 dbi  | -0.9 dbi|
| [spiral E=1](./sim/res/air/1.0Spiral12.png)  | 12 | 11 dbi  | -6 dbi|
| [spiral E=1](./sim/res/air/1.0Spiral16.png)  | 16 | 12 dbi  | -5 dbi|
| [spiral E=1](./sim/res/air/1.0Spiral32.png)  | 32 | 15 dbi  | -10 dbi|
| [spiral E=1 symetric](./sim/res/air/1.0Spiral2Sym16.png)  | 16 | 12 dbi  | -4 dbi|
| [spiral E=1 symetric](./sim/res/air/1.0Spiral2Sym32.png)  | 32 | 15 dbi  | -10 dbi|

