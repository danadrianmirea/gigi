///////////////////////////////////////////////////////////////////////////////
//         Gigi Rapid Graphics Prototyping and Code Generation Suite         //
//        Copyright (c) 2024 Electronic Arts Inc. All rights reserved.       //
///////////////////////////////////////////////////////////////////////////////

#pragma once

namespace FrontEndNodes
{
    inline int GetPinCount(const RenderGraphNode_Action_Barrier& node)
    {
        return (int)node.connections.size();
    }

    inline std::string GetPinName(const RenderGraphNode_Action_Barrier& node, int pinIndex)
    {
        return node.connections[pinIndex].srcPin;
    }

    inline InputNodeInfo GetPinInputNodeInfo(const RenderGraphNode_Action_Barrier& node, int pinIndex)
    {
        InputNodeInfo ret;
        ret.access = ShaderResourceAccessType::Barrier;
        ret.nodeIndex = node.connections[pinIndex].dstNodeIndex;
        ret.pinIndex = node.connections[pinIndex].dstNodePinIndex;
        ret.required = false;
        return ret;
    }
};
