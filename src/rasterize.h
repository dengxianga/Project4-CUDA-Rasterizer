/**
 * @file      rasterize.h
 * @brief     CUDA-accelerated rasterization pipeline.
 * @authors   Skeleton code: Yining Karl Li, Kai Ninomiya, Shuai Shao (Shrek)
 * @date      2012-2015
 * @copyright University of Pennsylvania & STUDENT
 */

#pragma once

#include <glm/glm.hpp>

#define TINYGLTF_LOADER_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#include <util/tiny_gltf_loader.h>

#include <cuda.h>
#include <cuda_runtime.h>

void rasterizeInit(int width, int height);
void rasterizeSetBuffers(const tinygltf::Scene & scene);

void rasterize(uchar4 *pbo);
void rasterizeFree();
