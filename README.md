# Phased Array

This project is developing a Phased Array for the localisation of an ROV.\
It ultrasonic (40kHz) transducers like [here](https://www.aliexpress.com/item/32294219722.html?gatewayAdapt=glo2deu&spm=a2g0o.9042311.0.0.51394c4dT7BWEK).

## Simulation

Mathematica simulations can be found in the [sim](./sim/) directory.

The [2D](./sim/2D/) and [3D](./sim/3D/) directories contain full **FEM** (finite element method) simulations of the pressure field around the transducers.\
Phaseguides were examined to narrow the aperture of the transducers to put them closer together.\
The 3D code wasn't efficient enough to continue with full 3D simulations.

Sparse phased arrays (in [Spiral.nb](./sim/PhasedArray_Spiral.nb)) negate the need for such close positioning of the transducers therefore the rather large transducer sizes can be used.
