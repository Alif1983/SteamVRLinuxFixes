#pragma once

#include <vulkan/vk_layer.h>

VKAPI_ATTR VkResult VKAPI_CALL Hook_vkCreateInstance(const VkInstanceCreateInfo* pCreateInfo,
                                                     const VkAllocationCallbacks* pAllocator,
                                                     VkInstance* pInstance);

VKAPI_ATTR VkResult VKAPI_CALL Hook_vkCreateDevice(VkPhysicalDevice physicalDevice,
                                                   const VkDeviceCreateInfo* pCreateInfo,
                                                   const VkAllocationCallbacks* pAllocator,
                                                   VkDevice* pDevice);

VKAPI_ATTR VkResult VKAPI_CALL Hook_vkCreateImage(VkDevice device,
                                                  const VkImageCreateInfo* pCreateInfo,
                                                  const VkAllocationCallbacks* pAllocator,
                                                  VkImage* pImage);

VKAPI_ATTR void VKAPI_CALL Hook_vkGetDeviceQueue(VkDevice device,
                                                 uint32_t queueFamilyIndex,
                                                 uint32_t queueIndex,
                                                 VkQueue* pQueue);

VKAPI_ATTR VkResult VKAPI_CALL Hook_vkCreateSwapchainKHR(VkDevice device,
                                                         const VkSwapchainCreateInfoKHR* pCreateInfo,
                                                         const VkAllocationCallbacks* pAllocator,
                                                         VkSwapchainKHR* pSwapchain);

VKAPI_ATTR VkResult VKAPI_CALL Hook_vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo);