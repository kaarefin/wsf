/*
* Copyright 2009-2010 WSO2, Inc. http://wso2.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


        #ifndef ADB_SETMODULEPARAMETERS_H
        #define ADB_SETMODULEPARAMETERS_H

       /**
        * adb_setModuleParameters.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: #axisVersion# #today#
        */

       /**
        *  adb_setModuleParameters class
        */

        

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_setModuleParameters adb_setModuleParameters_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_setModuleParameters_t
         * @param env pointer to environment struct
         * @return newly created adb_setModuleParameters_t object
         */
        adb_setModuleParameters_t* AXIS2_CALL
        adb_setModuleParameters_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _setModuleParameters adb_setModuleParameters_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_free (
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env);

        /**
         * Free adb_setModuleParameters_t object
         * @param  _setModuleParameters adb_setModuleParameters_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_free_obj (
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for moduleName. 
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_setModuleParameters_get_moduleName(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env);

        /**
         * Setter for moduleName.
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param arg_moduleName axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_set_moduleName(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env,
            const axis2_char_t*  arg_moduleName);

        /**
         * Resetter for moduleName
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_reset_moduleName(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env);

        
        

        /**
         * Getter for moduleVersion. 
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_setModuleParameters_get_moduleVersion(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env);

        /**
         * Setter for moduleVersion.
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param arg_moduleVersion axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_set_moduleVersion(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env,
            const axis2_char_t*  arg_moduleVersion);

        /**
         * Resetter for moduleVersion
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_reset_moduleVersion(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env);

        
        

        /**
         * Getter for parameters. Deprecated for array types, Use adb_setModuleParameters_get_parameters_at instead
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_setModuleParameters_get_parameters(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env);

        /**
         * Setter for parameters.Deprecated for array types, Use adb_setModuleParameters_set_parameters_at
         * or adb_setModuleParameters_add_parameters instead.
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param arg_parameters Array of axis2_char_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_set_parameters(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_parameters);

        /**
         * Resetter for parameters
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_reset_parameters(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env);

        
        /****************************** Getters and Setters For Arrays **********************************/
        /************ Array Specific Operations: get_at, set_at, add, remove_at, sizeof *****************/

        /**
         * E.g. use of get_at, set_at, add and sizeof
         *
         * for(i = 0; i < adb_element_sizeof_property(adb_object, env); i ++ )
         * {
         *     // Getting ith value to property_object variable
         *     property_object = adb_element_get_property_at(adb_object, env, i);
         *
         *     // Setting ith value from property_object variable
         *     adb_element_set_property_at(adb_object, env, i, property_object);
         *
         *     // Appending the value to the end of the array from property_object variable
         *     adb_element_add_property(adb_object, env, property_object);
         *
         *     // Removing the ith value from an array
         *     adb_element_remove_property_at(adb_object, env, i);
         *     
         * }
         *
         */

        
        
        /**
         * Get the ith element of parameters.
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axis2_char_t* of the array
         */
        axis2_char_t* AXIS2_CALL
        adb_setModuleParameters_get_parameters_at(
                adb_setModuleParameters_t* _setModuleParameters,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of parameters. (If the ith already exist, it will be replaced)
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_parameters element to set axis2_char_t* to the array
         * @return ith axis2_char_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_set_parameters_at(
                adb_setModuleParameters_t* _setModuleParameters,
                const axutil_env_t *env, int i,
                const axis2_char_t* arg_parameters);


        /**
         * Add to parameters.
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param arg_parameters element to add axis2_char_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_add_parameters(
                adb_setModuleParameters_t* _setModuleParameters,
                const axutil_env_t *env,
                const axis2_char_t* arg_parameters);

        /**
         * Get the size of the parameters array.
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct.
         * @return the size of the parameters array.
         */
        int AXIS2_CALL
        adb_setModuleParameters_sizeof_parameters(
                    adb_setModuleParameters_t* _setModuleParameters,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of parameters.
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_remove_parameters_at(
                adb_setModuleParameters_t* _setModuleParameters,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether moduleName is nill
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_setModuleParameters_is_moduleName_nil(
                adb_setModuleParameters_t* _setModuleParameters,
                const axutil_env_t *env);


        
        /**
         * Set moduleName to nill (currently the same as reset)
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_set_moduleName_nil(
                adb_setModuleParameters_t* _setModuleParameters,
                const axutil_env_t *env);
        

        /**
         * Check whether moduleVersion is nill
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_setModuleParameters_is_moduleVersion_nil(
                adb_setModuleParameters_t* _setModuleParameters,
                const axutil_env_t *env);


        
        /**
         * Set moduleVersion to nill (currently the same as reset)
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_set_moduleVersion_nil(
                adb_setModuleParameters_t* _setModuleParameters,
                const axutil_env_t *env);
        

        /**
         * Check whether parameters is nill
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_setModuleParameters_is_parameters_nil(
                adb_setModuleParameters_t* _setModuleParameters,
                const axutil_env_t *env);


        
        /**
         * Set parameters to nill (currently the same as reset)
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_set_parameters_nil(
                adb_setModuleParameters_t* _setModuleParameters,
                const axutil_env_t *env);
        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether parameters is nill at i
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_setModuleParameters_is_parameters_nil_at(
                adb_setModuleParameters_t* _setModuleParameters,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set parameters to nill at i
         * @param  _setModuleParameters _ adb_setModuleParameters_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_set_parameters_nil_at(
                adb_setModuleParameters_t* _setModuleParameters, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_deserialize(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_setModuleParameters_deserialize_obj(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_setModuleParameters_declare_parent_namespaces(
                    adb_setModuleParameters_t* _setModuleParameters,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param setModuleParameters_om_node node to serialize from
         * @param setModuleParameters_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_setModuleParameters_serialize(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env,
            axiom_node_t* setModuleParameters_om_node, axiom_element_t *setModuleParameters_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @param setModuleParameters_om_node node to serialize from
         * @param setModuleParameters_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_setModuleParameters_serialize_obj(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env,
            axiom_node_t* setModuleParameters_om_node, axiom_element_t *setModuleParameters_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_setModuleParameters is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_setModuleParameters_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_setModuleParameters_t
         * @param env pointer to environment struct
         * @param _moduleName axis2_char_t*
         * @param _moduleVersion axis2_char_t*
         * @param _parameters axutil_array_list_t*
         * @return newly created adb_setModuleParameters_t object
         */
        adb_setModuleParameters_t* AXIS2_CALL
        adb_setModuleParameters_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _moduleName,
                axis2_char_t* _moduleVersion,
                axutil_array_list_t* _parameters);

        


                /**
                 * Free adb_setModuleParameters_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _setModuleParameters adb_setModuleParameters_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axis2_char_t* AXIS2_CALL
                adb_setModuleParameters_free_popping_value(
                        adb_setModuleParameters_t* _setModuleParameters,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for moduleName by property number (1)
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_setModuleParameters_get_property1(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env);

    
        

        /**
         * Getter for moduleVersion by property number (2)
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_setModuleParameters_get_property2(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env);

    
        

        /**
         * Getter for parameters by property number (3)
         * @param  _setModuleParameters adb_setModuleParameters_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_setModuleParameters_get_property3(
            adb_setModuleParameters_t* _setModuleParameters,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_SETMODULEPARAMETERS_H */
    

